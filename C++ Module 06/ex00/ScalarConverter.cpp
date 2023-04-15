/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 18:15:27 by omanar            #+#    #+#             */
/*   Updated: 2023/04/15 21:25:32 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
	(void)src;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & obj)
{
	(void)obj;
	return (*this);
}

void ScalarConverter::convert(const char* literal) {
	try {
		std::cout << "char: ";
		int i = std::stoi(literal);
		if (!isascii(i))
			throw std::exception();
		if (std::isprint(i))
			std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	} catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
	}

	try {
		std::cout << "int: ";
		int i = std::stoi(literal);
		std::cout << i << std::endl;
	} catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
	}

	try {
		std::cout << "float: ";
		float f = std::stof(literal);
		std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	} catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
	}

	try {
		std::cout << "double: ";
		double d = std::stod(literal);
		std::cout << std::fixed << std::setprecision(1) << d << std::endl;
	} catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
	}
}
