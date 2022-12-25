/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 12:36:14 by omanar            #+#    #+#             */
/*   Updated: 2022/12/25 13:04:45 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {
	std::cout << "  | " << this->name << ": Is born" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "  | " << this->name << ": Is dead" << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << "  | " << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
