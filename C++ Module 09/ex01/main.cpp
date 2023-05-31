/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 22:51:57 by omanar            #+#    #+#             */
/*   Updated: 2023/05/30 17:47:49 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {

	try {
		if (ac != 2)
			throw std::runtime_error("Usage: ./RPN \"RPN expression\"");
		RPN rpn(av[1]);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return (1);
	}

	return (0);
}
