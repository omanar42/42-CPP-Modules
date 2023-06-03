/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 22:52:02 by omanar            #+#    #+#             */
/*   Updated: 2023/06/03 12:47:03 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <sstream>
#include <cstdlib>
#include <stdexcept>

class RPN {
	private:
		RPN();
	public:
		RPN(const RPN& src);
		RPN(const std::string& rpn);
		RPN& operator=(const RPN& other);
		~RPN();

		int		calculate(const int num1, const int num2, const char& op);
		bool	isOperator(const char &token);
		bool	isValidNumber(const char &token);
};
