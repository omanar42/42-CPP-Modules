/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:46:06 by omanar            #+#    #+#             */
/*   Updated: 2023/02/20 01:50:33 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
	DiamondTrap Diamond("Diamond");

	Diamond.attack("Enemy");
	Diamond.takeDamage(13);
	Diamond.beRepaired(10);
	Diamond.guardGate();
	Diamond.highFivesGuys();
	Diamond.whoAmI();

	return 0;
}
