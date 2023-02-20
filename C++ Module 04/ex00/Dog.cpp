/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:19:17 by omanar            #+#    #+#             */
/*   Updated: 2023/02/20 02:22:53 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Dog created" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const & src) {
	std::cout << "Dog created" << std::endl;
	*this = src;
}

Dog::~Dog(void) {
	std::cout << "Dog destroyed" << std::endl;
}

Dog & Dog::operator=(Dog const & other) {
	this->type = other.type;
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "Woof Woof" << std::endl;
}
