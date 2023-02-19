/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:39:51 by omanar            #+#    #+#             */
/*   Updated: 2023/02/19 19:30:48 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("Default"), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src) {
	this->Name = src.Name;
	this->HitPoints = src.HitPoints;
	this->EnergyPoints = src.EnergyPoints;
	this->AttackDamage = src.AttackDamage;
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (this->HitPoints == 0) {
		std::cout << "ClapTrap " << this->Name << " is dead!" << std::endl;
		return;
	}
	if (this->EnergyPoints == 0) {
		std::cout << "ClapTrap " << this->Name << " has no energy points left!" << std::endl;
		return;
	}
	this->EnergyPoints--;
	std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->HitPoints == 0) {
		std::cout << "ClapTrap " << this->Name << " is already dead!" << std::endl;
		return;
	}
	if (amount == 0) {
		std::cout << "ClapTrap " << this->Name << " takes no damage!" << std::endl;
	} else if (amount >= this->HitPoints) {
		this->HitPoints = 0;
		std::cout << "ClapTrap " << this->Name << " takes " << amount << " points of damage and dies!" << std::endl;
	} else {
		this->HitPoints -= amount;
		std::cout << "ClapTrap " << this->Name << " takes " << amount << " points of damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->HitPoints == 0) {
		std::cout << "ClapTrap " << this->Name << " is dead!" << std::endl;
		return;
	}
	if (this->EnergyPoints == 0) {
		std::cout << "ClapTrap " << this->Name << " has no energy points left!" << std::endl;
		return;
	}
	this->HitPoints += amount;
	this->EnergyPoints--;
	std::cout << "ClapTrap " << this->Name << " gets " << amount << " hit points back!" << std::endl;
}

std::string		ClapTrap::getName() {
	return this->Name;
}

unsigned int	ClapTrap::getHitPoints() {
	return this->HitPoints;
}

unsigned int	ClapTrap::getEnergyPoints() {
	return this->EnergyPoints;
}

unsigned int	ClapTrap::getAttackDamage() {
	return this->AttackDamage;
}
