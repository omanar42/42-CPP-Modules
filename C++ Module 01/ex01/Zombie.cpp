/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 13:25:28 by omanar            #+#    #+#             */
/*   Updated: 2022/12/25 13:48:11 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() { 
	std::cout << "  | New zombie Is born" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "  | " << this->name << " " << this->id << " : Is dead" << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << "  | " << this->name << " " << this->id << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::SetZombie(std::string name, int id) {
	this->name = name;
	this->id = id;
}
