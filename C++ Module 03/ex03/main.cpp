/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:46:06 by omanar            #+#    #+#             */
/*   Updated: 2023/03/25 20:39:03 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
	DiamondTrap Diamond("Diamond");

	std::cout << std::endl;

	Diamond.attack("Enemy");
	Diamond.takeDamage(13);
	Diamond.beRepaired(10);

	std::cout << std::endl;

	Diamond.guardGate();
	Diamond.highFivesGuys();

	std::cout << std::endl;

	Diamond.whoAmI();

	std::cout << std::endl;

	return 0;
}
