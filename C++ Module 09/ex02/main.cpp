/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:48:41 by omanar            #+#    #+#             */
/*   Updated: 2023/05/29 18:24:40 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av) {
	try {
		if (ac < 2)
			throw std::runtime_error("Usage: ./PmergeMe <Positive Integer Sequence>");

		std::vector<int>	vec;
		std::list<int>		lst;

		for (int i = 1; i < ac; i++) {
			isValid(av[i]);
			vec.push_back(atoi(av[i]));
			lst.push_back(atoi(av[i]));
		}

		std::cout << "Before: ";
		for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
			if (it + 1 != vec.end())
				std::cout << *it << " ";
			else
				std::cout << *it << std::endl;
		}
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}
