/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:52:00 by omanar            #+#    #+#             */
/*   Updated: 2023/03/27 20:22:20 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	std::cout << " | Creating Objects\n" << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n | Objects Types\n" << std::endl;

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;

	std::cout << "\n | Objects Sounds\n" << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << "\n | Deleting Objects\n" << std::endl;

	delete meta;
	delete j;
	delete i;

	std::cout << "\n | Creating Wrong Objects\n" << std::endl;

	const WrongAnimal* wrong = new WrongCat();
	std::cout << wrong->getType() << std::endl;
	wrong->makeSound();
	delete wrong;

	return 0;
}
