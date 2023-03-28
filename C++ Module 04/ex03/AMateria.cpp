/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:03:55 by omanar            #+#    #+#             */
/*   Updated: 2023/03/28 20:52:53 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : type("default") {}

AMateria::AMateria(std::string const & type) : type(type) {}

AMateria::AMateria(AMateria const & src) {
	*this = src;
}

AMateria::~AMateria(void) {}

AMateria & AMateria::operator=(AMateria const & other)
{
	this->type = other.type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria use on " << target.getName() << std::endl;
}
