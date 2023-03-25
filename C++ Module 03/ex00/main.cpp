/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:46:06 by omanar            #+#    #+#             */
/*   Updated: 2023/03/25 20:41:30 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap Sopu("Sopu");
	ClapTrap Spoody("Spoody");

	std::cout << std::endl;

	Sopu.attack(Spoody.getName());
	Spoody.takeDamage(Sopu.getAttackDamage());
	Spoody.attack(Sopu.getName());
	Sopu.takeDamage(Spoody.getAttackDamage());

	std::cout << std::endl;

	Sopu.beRepaired(10);
	Spoody.beRepaired(20);

	std::cout << std::endl;

	std::cout << Sopu.getName() << ": " << Sopu.getHitPoints() << " HP, " << Sopu.getEnergyPoints() << " EP" << std::endl;
	std::cout << Spoody.getName() << ": " << Spoody.getHitPoints() << " HP, " << Spoody.getEnergyPoints() << " EP" << std::endl;
	
	std::cout << std::endl;

	return 0;
}
