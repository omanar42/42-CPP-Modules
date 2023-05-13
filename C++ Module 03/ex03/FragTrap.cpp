/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:32:04 by omanar            #+#    #+#             */
/*   Updated: 2023/05/13 18:13:31 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	setDefault();
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap " << this->Name << " is created!" << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	setDefault();
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src.Name) {
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & src) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	this->Name = src.Name;
	this->HitPoints = src.HitPoints;
	this->EnergyPoints = src.EnergyPoints;
	this->AttackDamage = src.AttackDamage;
	return *this;
}

void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->Name << " is giving high fives!" << std::endl;
}

unsigned int	FragTrap::getDefault(std::string str) {
	if (str == "HitPoints")
		return this->defaultHitPoints;
	else if (str == "EnergyPoints")
		return this->defaultEnergyPoints;
	else if (str == "AttackDamage")
		return this->defaultAttackDamage;
	else
		return 0;
}

void	FragTrap::setDefault() {
	this->defaultHitPoints = this->HitPoints;
	this->defaultEnergyPoints = this->EnergyPoints;
	this->defaultAttackDamage = this->AttackDamage;
}