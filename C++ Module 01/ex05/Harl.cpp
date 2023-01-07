/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 00:16:21 by omanar            #+#    #+#             */
/*   Updated: 2023/01/07 16:24:19 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug( void ) {
	std::cout << "  | I love having extra time to work on my hobbies." << std::endl
	<< "  | I really do!" << std::endl;
}

void	Harl::info( void ) {
	std::cout << "  | I cannot believe I have to work overtime again." << std::endl
	<< "  | You didn't give me enough time to work on my hobbies!" << std::endl
	<< "  | If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "  | I think I deserve to have some extra BlackHole for free." << std::endl
	<< "  | I've been a model student for year, while you decreasing day by day." << std::endl;
}

void	Harl::error( void ) {
	std::cout << "  | This is unacceptable! I want to speak with the staffs now." << std::endl;
}

void	Harl::complain( std::string level ) {
	std::string	levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	HarlMemFn fun[4] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	
	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			(this->*fun[i])();
			return ;
		}
	}
	std::cout << "  | It's all good now. Let's move on and focus on the important stuff." << std::endl;
}
