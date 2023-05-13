/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 03:03:01 by omanar            #+#    #+#             */
/*   Updated: 2023/05/13 18:16:16 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	std::cout << "WrongCat created" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src) {
	std::cout << "WrongCat created" << std::endl;
	*this = src;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destroyed" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & other) {
	this->type = other.type;
	return *this;
}

void	WrongCat::makeSound(void) const {
	std::cout << "WrongCat sound" << std::endl;
}
