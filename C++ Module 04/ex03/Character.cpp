/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:50:57 by omanar            #+#    #+#             */
/*   Updated: 2023/02/20 17:51:15 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("default") {
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(std::string const & name) : name(name) {
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(Character const & src) {
	*this = src;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
}

Character & Character::operator=(Character const & other)
{
	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
	for (int i = 0; i < 4; i++)
		this->inventory[i] = other.inventory[i]->clone();
	return (*this);
}

std::string const & Character::getName() const {
	return (this->name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->inventory[idx] != NULL)
		this->inventory[idx]->use(target);
}
