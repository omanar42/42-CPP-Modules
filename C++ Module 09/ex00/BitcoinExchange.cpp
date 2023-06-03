/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:57:06 by omanar            #+#    #+#             */
/*   Updated: 2023/06/03 12:38:26 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string const & filename) {
    this->loadData();
	this->handleData(filename);
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src) {
    *this = src;
}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const & other) {
    if (this != &other) {
        this->data = other.data;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::loadData() {
	std::ifstream file("data.csv");
	if (!file.is_open())
		throw std::runtime_error("Error: could not open file.");

	std::string line;
	while (std::getline(file, line)) {
		if (line == "" || line == "\n" || line == "date,exchange_rate")
			continue;
		std::istringstream iss(line);
		std::string date;
		float price;

		std::getline(iss, date, ',');
		iss >> price;

		if (iss.fail())
			throw std::runtime_error("Error: could not read file.");
		this->data[date] = price;
	}
	file.close();
}

void	BitcoinExchange::handleData(std::string const & filename) {
	std::ifstream file(filename.c_str());
	if (!file.is_open())
		throw std::runtime_error("Error: could not open file.");

	std::string line;
	int index = 0;
	while (std::getline(file, line)) {
		if (isHeader(line, index++))
			continue;
		std::istringstream iss(line);
		std::string date;
		std::string valueStr;
		float value;
		char separator;

		try {
			if (!(iss >> date >> separator >> valueStr) || separator != '|'
				|| !this->isValidValue(valueStr) || !this->isValidDate(date) || iss.peek() != EOF)
				throw std::runtime_error("Error: bad input => " + line);
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
			continue;
		}

		value = std::stof(valueStr);
		std::map<std::string, float>::iterator it = this->data.find(date);
		if (it != this->data.end()) {
			std::cout << date << " => " << value;
			std::cout << " = " << value * it->second << std::endl;
		}
		if (it == this->data.end()) {
			it = this->data.upper_bound(date);
			if (it != this->data.begin())
				it--;
			std::cout << date << " => " << value;
			std::cout << " = " << value * it->second << std::endl;
		}
	}
	file.close();
}

bool BitcoinExchange::isValidDate(const std::string& date) const {
	std::string format = "YYYY-MM-DD";
	if (date.length() != format.length()) {
		throw std::runtime_error("Error: bad input => " + date);
	}
	for (size_t i = 0; i < format.length(); ++i) {
		if (format[i] == 'Y' && !isdigit(date[i]))
			throw std::runtime_error("Error: bad input => " + date);
		else if (format[i] == 'M' && !(isdigit(date[i])))
			throw std::runtime_error("Error: bad input => " + date);
		else if (format[i] == 'D' && !(isdigit(date[i])))
			throw std::runtime_error("Error: bad input => " + date);
		else if (format[i] == '-' && date[i] != '-')
			throw std::runtime_error("Error: bad input => " + date);
	}

	int year = atoi(date.substr(0, 4).c_str());
	int month = atoi(date.substr(5, 2).c_str());
	int day = atoi(date.substr(8, 2).c_str());

	if (year < 2009 || year > 2022)
		throw std::runtime_error("Error: date out of range => " + date);
	if (month < 1 || month > 12)
		throw std::runtime_error("Error: bad input => " + date);
	if (day < 1 || day > 31)
		throw std::runtime_error("Error: bad input => " + date);

	if (year == 2009 && month == 1 && day < 2)
		throw std::runtime_error("Error: date out of range => " + date);

	return true;
}

bool BitcoinExchange::isValidValue(std::string const & value) const {
	float valueFloat = atof(value.c_str());

	if (valueFloat < 0)
		throw std::runtime_error("Error: not a positive number.");
	else if (valueFloat > 1000)
		throw std::runtime_error("Error: too large a number.");
	
	for (size_t i = 0; i < value.length(); ++i) {
		if (!isdigit(value[i]) && value[i] != '.')
			throw std::runtime_error("Error: bad input");
		if (value[i] == '.' && (i == value.length() - 1 || i == 0))
			throw std::runtime_error("Error: bad input");
	}
	return true;
}

bool BitcoinExchange::isHeader(const std::string& line, int index) const {
	std::string date;
	std::string value;
	char separator;

	std::istringstream iss(line);
	iss >> date >> separator >> value;

	if (date == "date" && value == "value" && separator == '|' && index == 0)
		return true;
	if (line == "" || line == "\n")
		return true;
	return false;
}
