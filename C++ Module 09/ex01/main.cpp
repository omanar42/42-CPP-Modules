/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 22:51:57 by omanar            #+#    #+#             */
/*   Updated: 2023/05/27 11:32:34 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {

	try {
		if (ac != 2)
			throw std::runtime_error("Usage: ./RPN \"RPN expression\"");
		std::string rpn = av[1];
		int result = processRPN(rpn);
		std::cout << result << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return (1);
	}

	return (0);
}
