/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:48:44 by omanar            #+#    #+#             */
/*   Updated: 2023/06/03 12:17:23 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& src)
{
	*this = src;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

PmergeMe::~PmergeMe() {}

void PmergeMe::isValid(std::string str) {
	if (str.length() == 0)
		throw std::runtime_error("Error");
	for (size_t i = 0; i < str.length(); i++) {
		if (!isdigit(str[i]))
			throw std::runtime_error("Error");
	}
}
