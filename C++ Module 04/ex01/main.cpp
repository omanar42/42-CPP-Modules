/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:52:00 by omanar            #+#    #+#             */
/*   Updated: 2023/03/27 20:29:05 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << " | Creating Objects\n" << std::endl;

	Animal* animals[6];

	for (int i = 0; i < 6; i++) {
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << "\n | Objects Sounds\n" << std::endl;

	for (int i = 0; i < 6; i++)
		animals[i]->makeSound();
	
	std::cout << "\n | Deleting Objects\n" << std::endl;

	for (int i = 0; i < 6; i++)
		delete animals[i];

	return 0;
}
