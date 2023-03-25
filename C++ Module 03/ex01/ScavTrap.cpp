/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:16:51 by omanar            #+#    #+#             */
/*   Updated: 2023/03/25 20:24:27 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap " << this->Name << " is created!" << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->Name << " is destroyed!" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src) {
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	this->Name = src.Name;
	this->HitPoints = src.HitPoints;
	this->EnergyPoints = src.EnergyPoints;
	this->AttackDamage = src.AttackDamage;
	return *this;
}

void	ScavTrap::attack(const std::string& target) {
	if (this->HitPoints == 0) {
		std::cout << "ScavTrap " << this->Name << " is dead!" << std::endl;
		return;
	}
	if (this->EnergyPoints == 0) {
		std::cout << "ScavTrap " << this->Name << " has no energy points left!" << std::endl;
		return;
	}
	this->EnergyPoints--;
	std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->Name << " is now in Gate keeper mode!" << std::endl;
}
