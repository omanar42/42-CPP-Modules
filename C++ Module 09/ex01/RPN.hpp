/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 22:52:02 by omanar            #+#    #+#             */
/*   Updated: 2023/05/27 10:33:17 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <sstream>
#include <cstdlib>
#include <stdexcept>

int		processRPN(const std::string& expression);
int		calculate(const int num1, const int num2, const char& op);
bool	isOperator(const std::string& token);
bool	isValidNumber(const std::string& token);
