/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:48:46 by omanar            #+#    #+#             */
/*   Updated: 2023/05/31 19:25:10 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <deque>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <exception>

class   PmergeMe {
	private:
		PmergeMe();
		PmergeMe(const PmergeMe& src);
		PmergeMe& operator=(const PmergeMe& other);
		~PmergeMe();

	public:
		static void isValid(std::string str);

		template <typename T>
		static void process(T& container)
		{
			if (container.size() > 1)
			{
				T left;
				T right;

				size_t mid = container.size() / 2;
				for (typename T::size_type i = 0; i < mid; i++)
					left.push_back(container[i]);

				for (typename T::size_type i = mid; i < container.size(); i++)
					right.push_back(container[i]);

				for (typename T::size_type i = 1; i < left.size(); i++)
				{
					typename T::value_type temp = left[i];
					typename T::size_type j = i;
					while (j > 0 && temp < left[j - 1])
					{
						left[j] = left[j - 1];
						j--;
					}
					left[j] = temp;
				}

				typename T::iterator it;
				for (typename T::size_type i = 0; i < right.size(); i++)
				{
					it = std::lower_bound(left.begin(), left.end(), right[i]);
					left.insert(it, right[i]);
				}

				for (typename T::size_type i = 0; i < container.size(); i++)
					container[i] = left[i];
			}
		}
};

