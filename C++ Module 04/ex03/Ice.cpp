/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:47:13 by omanar            #+#    #+#             */
/*   Updated: 2023/04/09 21:19:09 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(Ice const & src) {
	*this = src;
}

Ice::~Ice() {}

Ice & Ice::operator=(Ice const & other) {
	this->type = other.type;
	return (*this);
}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
