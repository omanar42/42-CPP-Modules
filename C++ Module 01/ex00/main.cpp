/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 12:53:36 by omanar            #+#    #+#             */
/*   Updated: 2022/12/25 13:11:00 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int main() {
	std::cout << "Creating a new Zombie on the heap" << std::endl;
	Zombie* zombie = newZombie("Eddie");
	zombie->announce();
	delete zombie;

	std::cout << "\nCreating a new Zombie on the stack" << std::endl;
	randomChump("Wildy");
	return (0);
}
