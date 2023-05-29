/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:57:06 by omanar            #+#    #+#             */
/*   Updated: 2023/05/26 22:45:26 by omanar           ###   ########.fr       */
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
	int lineNum = 1;
	while (std::getline(file, line)) {
		if (lineNum > 1) {
			std::istringstream iss(line);
			std::string date;
			float value;
			char separator;

			try {
				if (!(iss >> date >> separator >> value) || separator != '|'
					|| !this->isValidValue(value))
					throw std::runtime_error("Error: bad input => " + line);
			}
			catch(const std::exception& e) {
				std::cerr << e.what() << '\n';
				lineNum++;
				continue;
			}

			std::map<std::string, float>::iterator it = this->data.find(date);
			if (it != this->data.end()) {
				std::cout << date << " => " << value;
				std::cout << " = " << value * it->second << std::endl;
			}
			if (it == this->data.end()) {
				it = this->data.upper_bound(date);
				it--;
				std::cout << date << " => " << value;
				std::cout << " = " << value * it->second << std::endl;
			}
		}
		lineNum++;
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
		else if (format[i] == 'M' && !(isdigit(date[i]) || date[i] == '-'))
			throw std::runtime_error("Error: bad input => " + date);
		else if (format[i] == 'D' && !(isdigit(date[i]) || date[i] == '-'))
			throw std::runtime_error("Error: bad input => " + date);
		else if (format[i] != date[i])
			throw std::runtime_error("Error: bad input => " + date);
	}
	return true;
}

bool BitcoinExchange::isValidValue(float value) const {
	if (value < 0)
		throw std::runtime_error("Error: not a positive number.");
	else if (value > 1000)
		throw std::runtime_error("Error: too large a number.");
	return true;
}