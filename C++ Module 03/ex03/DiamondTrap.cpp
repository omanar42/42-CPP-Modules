/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:40:06 by omanar            #+#    #+#             */
/*   Updated: 2023/03/24 22:39:24 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this->DiamondTrap::Name = this->ClapTrap::Name;
	this->ClapTrap::Name += "_clap_name";	
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	std::cout << "The monster " << name << " is born!" << std::endl;
	this->Name = name;
	this->HitPoints = FragTrap::getDefault("HitPoints");
	this->EnergyPoints = ScavTrap::getDefault("EnergyPoints");
	this->AttackDamage = FragTrap::getDefault("AttackDamage");
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) {
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "The monster " << this->Name << " is dead!" << std::endl;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & other) {
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	this->Name = other.Name;
	this->ClapTrap::Name = other.ClapTrap::Name;
	this->HitPoints = other.HitPoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;
	return *this;
}

void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap Name: " << this->Name << std::endl;
	std::cout << "ClapTrap Name: " << this->ClapTrap::Name << std::endl;
}
