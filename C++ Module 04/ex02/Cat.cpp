/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:22:11 by omanar            #+#    #+#             */
/*   Updated: 2023/04/09 20:35:22 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Cat created" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const & src) {
	std::cout << "Cat created" << std::endl;
	this->brain = new Brain();
	*this = src;
}

Cat::~Cat(void) {
	delete this->brain;
	std::cout << "Cat destroyed" << std::endl;
}

Cat & Cat::operator=(Cat const & other) {
	this->type = other.type;
	*this->brain = *other.brain;
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "Meow Meow" << std::endl;
}
