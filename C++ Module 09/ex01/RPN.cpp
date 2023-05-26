/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 22:52:00 by omanar            #+#    #+#             */
/*   Updated: 2023/05/26 23:42:41 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool isOperator(const std::string& token) {
	return (token == "+" || token == "-" || token == "*" || token == "/");
}

bool isValidNumber(const std::string& token) {
	return (token.length() == 1 && token[0] >= '0' && token[0] <= '9');
}

int calculate(const int num1, const int num2, const char& op) {
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

int processRPN(const std::string& rpn) {
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
			throw std::runtime_error("Error: Invalid expression");
	}

	if (stack.size() != 1)
		throw std::runtime_error("Error: Invalid expression");

	return stack.top();
}
