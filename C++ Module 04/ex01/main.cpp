/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:52:00 by omanar            #+#    #+#             */
/*   Updated: 2023/02/20 03:16:42 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal* animals[6];
	for (int i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < 6; i++)
		animals[i]->makeSound();
	
	for (int i = 0; i < 6; i++)
		delete animals[i];

	return 0;
}
