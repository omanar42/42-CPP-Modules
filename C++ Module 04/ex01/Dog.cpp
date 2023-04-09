/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:19:17 by omanar            #+#    #+#             */
/*   Updated: 2023/04/09 20:34:54 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Dog created" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog const & src) {
	std::cout << "Dog created" << std::endl;
	this->brain = new Brain();
	*this = src;
}

Dog::~Dog(void) {
	delete this->brain;
	std::cout << "Dog destroyed" << std::endl;
}

Dog & Dog::operator=(Dog const & other) {
	this->type = other.type;
	*this->brain = *other.brain;
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "Woof Woof" << std::endl;
}
