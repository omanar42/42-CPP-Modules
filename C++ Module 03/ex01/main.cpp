/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:46:06 by omanar            #+#    #+#             */
/*   Updated: 2023/02/19 19:15:58 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ScavTrap Sopu("Sopu");
	ScavTrap Spoody("Spoody");

	Sopu.attack(Spoody.getName());
	Spoody.takeDamage(Sopu.getAttackDamage());
	Spoody.attack(Sopu.getName());
	Sopu.takeDamage(Spoody.getAttackDamage());

	Sopu.beRepaired(10);
	Spoody.beRepaired(20);
	Spoody.guardGate();

	std::cout << Sopu.getName() << ": " << Sopu.getHitPoints() << " HP, " << Sopu.getEnergyPoints() << " EP" << std::endl;
	std::cout << Spoody.getName() << ": " << Spoody.getHitPoints() << " HP, " << Spoody.getEnergyPoints() << " EP" << std::endl;
	
	return 0;
}
