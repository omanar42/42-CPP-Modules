/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:48:41 by omanar            #+#    #+#             */
/*   Updated: 2023/06/03 18:19:54 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    try {
        if (ac < 2)
    		throw std::runtime_error("Usage: ./PmergeMe <Positive Integer Sequence>");
    
        std::vector<int> vec;
        std::deque<int> deq;

		for (int i = 1; i < ac; i++) {
			PmergeMe::isValid(av[i]);
			vec.push_back(std::atoi(av[i]));
			deq.push_back(std::atoi(av[i]));
		}

		std::cout << "Before: ";

		for (std::size_t i = 0; i < vec.size(); i++) {
			if (i != vec.size() - 1)
				std::cout << vec[i] << " ";
			else
				std::cout << vec[i] << std::endl;
		}

		clock_t start = clock();
		PmergeMe::process(vec);
		clock_t end = clock();
		double diff = static_cast<double>(end - start) / (CLOCKS_PER_SEC / 1000000.0);

		std::cout << "After:  ";
		for (std::size_t i = 0; i < vec.size(); i++) {
			if (i != vec.size() - 1)
				std::cout << vec[i] << " ";
			else
				std::cout << vec[i] << std::endl;
		}


		std::cout << "Time to process a range of " << vec.size() << "  elements with std::vector : "
			<< std::fixed << std::setprecision(5) << diff << " us" << std::endl;

		start = clock();
		PmergeMe::process(deq);
		end = clock();
		diff = static_cast<double>(end - start) / (CLOCKS_PER_SEC / 1000000);

		std::cout << "Time to process a range of " << deq.size() << "  elements with std::deque : "
			<< std::fixed << std::setprecision(5) << diff << " us" << std::endl;

    } catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return 1;
	}

    return 0;
}
