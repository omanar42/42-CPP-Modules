/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 22:52:00 by omanar            #+#    #+#             */
/*   Updated: 2023/05/30 10:33:38 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN& src) {
	*this = src;
}

RPN& RPN::operator=(const RPN& other) {
	if (this != &other) {
		*this = other;
	}
	return *this;
}

RPN::~RPN() {}

RPN::RPN(const std::string& rpn) {
	std::stack<int> stack;
	std::istringstream iss(rpn);
	std::string token;

	while (iss >> token) {
		if (isOperator(token)) {
			if (stack.size() < 2)
				throw std::runtime_error("Error: Invalid expression");
			
			int num2 = stack.top();
			stack.pop();
			
			int num1 = stack.top();
			stack.pop();
			
			int result = calculate(num1, num2, token[0]);
			stack.push(result);
		}
		else if (isValidNumber(token))
			stack.push(atoi(token.c_str()));
		else
			throw std::runtime_error("Error");
	}

	if (stack.size() != 1)
		throw std::runtime_error("Error: Invalid expression");

	std::cout << stack.top() << std::endl;
}

bool RPN::isOperator(const std::string& token) {
	return (token == "+" || token == "-" || token == "*" || token == "/");
}

bool RPN::isValidNumber(const std::string& token) {
	return (token.length() == 1 && token[0] >= '0' && token[0] <= '9');
}

int RPN::calculate(const int num1, const int num2, const char& op) {
	switch (op) {
		case '+':
			return num1 + num2;
		case '-':
			return num1 - num2;
		case '*':
			return num1 * num2;
		case '/':
			if (num2 == 0)
				throw std::runtime_error("Error: Division by zero");
			return num1 / num2;
		default:
			throw std::runtime_error("Error: Invalid expression");
	}
}
