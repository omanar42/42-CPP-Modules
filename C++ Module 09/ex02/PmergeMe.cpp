/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:48:44 by omanar            #+#    #+#             */
/*   Updated: 2023/05/29 23:43:01 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	isValid(std::string str) {
	for (size_t i = 0; i < str.length(); i++) {
		if (!isdigit(str[i]))
			throw std::runtime_error("Error: Invalid input");
		if (str[0] == '-')
			throw std::runtime_error("Error: Positive integer only");
	}
}

void	PmergeMeVec(std::vector<std::pair<unsigned int, unsigned int> > &container) {
	
	// swap pairs if first element is greater than second
	for (std::vector<std::pair<unsigned int, unsigned int> >::iterator it = container.begin(); it != container.end(); it++) {
		if (it->first > it->second)
			std::swap(it->first, it->second);
	}

	std::vector<unsigned int> smallest;
	std::vector<unsigned int> biggest;

	// fill smallest with the smallest elements and biggest with the biggest elements
	for (std::vector<std::pair<unsigned int, unsigned int> >::iterator it = container.begin(); it != container.end(); it++) {
		smallest.push_back(it->first);
		biggest.push_back(it->second);
	}

	// sort smallest with insertion sort
	int j;
	for (size_t i = 1; i < smallest.size(); i++) {
		j = i;
		while (j > 0 && smallest[j - 1] > smallest[j]) {
			std::swap(smallest[j], smallest[j - 1]);
			j--;
		}
	}

	// Now start to insert the elements of largest to smallest by using lower_bound to get its position and the member function insert to insert.
	for (std::vector<unsigned int>::iterator it = biggest.begin(); it != biggest.end(); it++) {
		std::vector<unsigned int>::iterator it2 = std::lower_bound(smallest.begin(), smallest.end(), *it);
		smallest.insert(it2, *it);
	}

	// Now let's modify the container to be sorted
	for (std::vector<std::pair<unsigned int, unsigned int> >::iterator it = container.begin(); it != container.end(); it++) {
		it->first = smallest.front();
		smallest.erase(smallest.begin());
		it->second = smallest.front();
		smallest.erase(smallest.begin());
	}
}

void	PmergeMeLst(std::list<std::pair<unsigned int, unsigned int> > &container)
{
	// swap pairs if first element is greater than second
	for (std::list<std::pair<unsigned int, unsigned int> >::iterator it = container.begin(); it != container.end(); it++) {
		if (it->first > it->second)
			std::swap(it->first, it->second);
	}

	std::list<unsigned int> smallest;
	std::list<unsigned int> biggest;

	// fill smallest with the smallest elements and biggest with the biggest elements
	for (std::list<std::pair<unsigned int, unsigned int> >::iterator it = container.begin(); it != container.end(); it++) {
		smallest.push_back(it->first);
		biggest.push_back(it->second);
	}

	// sort smallest with insertion sort
	int j;
	for (size_t i = 1; i < smallest.size(); i++) {
		j = i;
		while (j > 0 && smallest.front() > smallest.back()) {
			std::swap(smallest.front(), smallest.back());
			j--;
		}
	}

	// Now start to insert the elements of largest to smallest by using lower_bound to get its position and the member function insert to insert.
	for (std::list<unsigned int>::iterator it = biggest.begin(); it != biggest.end(); it++) {
		std::list<unsigned int>::iterator it2 = std::lower_bound(smallest.begin(), smallest.end(), *it);
		smallest.insert(it2, *it);
	}

	// Now let's modify the container to be sorted
	for (std::list<std::pair<unsigned int, unsigned int> >::iterator it = container.begin(); it != container.end(); it++) {
		it->first = smallest.front();
		smallest.pop_front();
		it->second = smallest.front();
		smallest.pop_front();
	}
}