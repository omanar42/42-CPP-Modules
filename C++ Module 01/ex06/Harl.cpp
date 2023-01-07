/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 15:58:58 by omanar            #+#    #+#             */
/*   Updated: 2023/01/07 16:20:34 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl
	<< "  | I love having extra time to work on my hobbies." << std::endl
	<< "  | I really do!" << std::endl;
}

void	Harl::info( void ) {
	std::cout << "[ INFO ]" << std::endl
	<< "  | I cannot believe I have to work overtime again." << std::endl
	<< "  | You didn't give me enough time to work on my hobbies!" << std::endl
	<< "  | If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl
	<< "  | I think I deserve to have some extra BlackHole for free." << std::endl
	<< "  | I've been a model student for year, while you decreasing day by day." << std::endl;
}

void	Harl::error( void ) {
	std::cout << "[ ERROR ]" << std::endl
	<< "  | This is unacceptable! I want to speak with the staffs now." << std::endl;
}

void	Harl::complain( std::string level ) {
	int	i = 0;
	std::string	levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	
	for (i = 0; i < 4; i++) {
		if (levels[i] == level) {
			break ;
		}
	}
	switch (i) {
		case 0:
			this->debug();
			std::cout << std::endl;
		case 1:
			this->info();
			std::cout << std::endl;
		case 2:
			this->warning();
			std::cout << std::endl;
		case 3:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}