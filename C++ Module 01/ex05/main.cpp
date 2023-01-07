/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 00:16:14 by omanar            #+#    #+#             */
/*   Updated: 2023/01/07 15:45:17 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( void ) {
	Harl	harl;

	std::cout << "DEBUG level:" << std::endl;
	harl.complain("DEBUG");

	std::cout << "\nINFO level:" << std::endl;
	harl.complain("INFO");

	std::cout << "\nWARNING level:" << std::endl;
	harl.complain("WARNING");

	std::cout << "\nERROR level:" << std::endl;
	harl.complain("ERROR");

	std::cout << "\nRANDOM:" << std::endl;
	harl.complain("");
	return 0;
}
