/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 13:26:39 by omanar            #+#    #+#             */
/*   Updated: 2022/12/25 13:45:42 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	std::cout << "Time to create a horde of Zombies!" << std::endl;
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		horde[i].SetZombie(name, i + 1);
	}
	return horde;
}
