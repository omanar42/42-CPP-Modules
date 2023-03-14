/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 13:32:15 by omanar            #+#    #+#             */
/*   Updated: 2023/03/13 02:10:29 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main() {
	Zombie* horde = zombieHorde(5, "Zombie");
	std::cout << "\nHorde of Zombies is coming..." << std::endl;
	for (int i = 0; i < 5; i++) {
		horde[i].announce();
	}
	std::cout << "\nHorde of Zombies is dying..." << std::endl;
	delete[] horde;
	return 0;
}
