/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:52:00 by omanar            #+#    #+#             */
/*   Updated: 2023/02/20 03:32:38 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// Animal animal;
	Dog dog;
	Cat cat;

	dog.makeSound();
	cat.makeSound();

	return 0;
}
