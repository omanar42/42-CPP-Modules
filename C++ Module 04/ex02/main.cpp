/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:52:00 by omanar            #+#    #+#             */
/*   Updated: 2023/03/27 20:49:12 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << " | Creating Objects\n" << std::endl;

	// Animal animal;
	Dog dog;
	Cat cat;

	std::cout << "\n | Objects Sounds\n" << std::endl;

	dog.makeSound();
	cat.makeSound();

	std::cout << "\n | Deleting Objects\n" << std::endl;

	return 0;
}
