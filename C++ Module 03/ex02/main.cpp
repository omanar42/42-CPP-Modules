/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:46:06 by omanar            #+#    #+#             */
/*   Updated: 2023/02/19 19:37:15 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	FragTrap Sopu("Sopu");
	ScavTrap Spoody("Spoody");

	Sopu.attack(Spoody.getName());
	Spoody.takeDamage(Sopu.getAttackDamage());
	Spoody.attack(Sopu.getName());
	Sopu.takeDamage(Spoody.getAttackDamage());

	Sopu.beRepaired(10);
	Spoody.beRepaired(10);

	Spoody.guardGate();
	Sopu.highFivesGuys();

	std::cout << Sopu.getName() << ": " << Sopu.getHitPoints() << " HP, " << Sopu.getEnergyPoints() << " EP" << std::endl;
	std::cout << Spoody.getName() << ": " << Spoody.getHitPoints() << " HP, " << Spoody.getEnergyPoints() << " EP" << std::endl;
	
	return 0;
}
