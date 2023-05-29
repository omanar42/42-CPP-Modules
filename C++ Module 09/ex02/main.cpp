/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:48:41 by omanar            #+#    #+#             */
/*   Updated: 2023/05/29 23:49:24 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av) {
	try {
		if (ac < 2)
			throw std::runtime_error("Usage: ./PmergeMe <Positive Integer Sequence>");

        std::vector<std::pair<unsigned int, unsigned int> >	vec;
		std::list<std::pair<unsigned int, unsigned int> >	lst;
		

		for (int i = 1; i < ac; i+=2) {
			isValid(av[i]);
			if (i + 1 == ac) {
				vec.push_back(std::make_pair(atoi(av[i]), atoi("0")));
				lst.push_back(std::make_pair(atoi(av[i]), atoi("0")));
				break;
			}
			isValid(av[i + 1]);
			vec.push_back(std::make_pair(atoi(av[i]), atoi(av[i + 1])));
			lst.push_back(std::make_pair(atoi(av[i]), atoi(av[i + 1])));
		}

		std::cout << "Before: ";
		for (std::vector<std::pair<unsigned int, unsigned int> >::iterator it = vec.begin(); it != vec.end(); it++) {
			if (it + 1 != vec.end())
				std::cout << it->first << " " << it->second << " ";
			else
				std::cout << it->first << " " << it->second << std::endl;
		}

		clock_t start, end;
		start = clock();
		PmergeMeVec(vec);
		end = clock();

		std::cout << "After: ";
		for (std::vector<std::pair<unsigned int, unsigned int> >::iterator it = vec.begin(); it != vec.end(); it++) {
			if (it + 1 != vec.end())
				std::cout << it->first << " " << it->second << " ";
			else
				std::cout << it->first << " " << it->second << std::endl;
		}

		double timeUsed = ((double)(end - start)) * 1000000 / CLOCKS_PER_SEC;

		std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : "
			<< std::fixed << std::setprecision(5) << timeUsed << " us" << std::endl;

		start = clock();
		PmergeMeLst(lst);
		end = clock();

		timeUsed = ((double)(end - start)) * 1000000 / CLOCKS_PER_SEC;

		std::cout << "Time to process a range of " << vec.size() << " elements with std::list : "
			<< std::fixed << std::setprecision(5) << timeUsed << " us" << std::endl;

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}
