/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 02:30:46 by omanar            #+#    #+#             */
/*   Updated: 2023/03/27 20:29:33 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain created" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "No idea...";
}

Brain::Brain(Brain const & src) {
	*this = src;
}

Brain::~Brain(void) {
	std::cout << "Brain destroyed" << std::endl;
}

Brain & Brain::operator=(Brain const & src) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return *this;
}
