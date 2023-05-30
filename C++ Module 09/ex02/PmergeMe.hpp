/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:48:46 by omanar            #+#    #+#             */
/*   Updated: 2023/05/30 10:56:20 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <list>
#include <exception>
#include <iomanip>

class PmergeMe {
	private:
		PmergeMe();
		PmergeMe(const PmergeMe& src);
		PmergeMe& operator=(const PmergeMe& other);
		~PmergeMe();

	public:
		static void	isValid(std::string str);
		static void	PmergeMeVec(std::vector<std::pair<unsigned int, unsigned int> > &container);
		static void	PmergeMeLst(std::list<std::pair<unsigned int, unsigned int> > &container);
};
