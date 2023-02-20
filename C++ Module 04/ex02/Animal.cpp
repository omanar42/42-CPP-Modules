/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:57:03 by omanar            #+#    #+#             */
/*   Updated: 2023/02/20 03:31:35 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Animal created" << std::endl;
	this->type = "Animal";
}

Animal::Animal(Animal const & src) {
	std::cout << "Animal created" << std::endl;
	*this = src;
}

Animal::~Animal(void) {
	std::cout << "Animal destroyed" << std::endl;
}

Animal & Animal::operator=(Animal const & other) {
	this->type = other.type;
	return *this;
}

std::string	Animal::getType(void) const {
	return this->type;
}
