/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:16:36 by omanar            #+#    #+#             */
/*   Updated: 2023/05/16 10:36:28 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

class Span {
	private:
		unsigned int N;
		std::vector<int> numbers;

	public:
		Span();
		Span(unsigned int n);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();

		void addNumber(int num);
		int shortestSpan() const;
		long longestSpan() const;

		template <typename T>
		void addNumbers(T begin, T end) {
			if (numbers.size() + std::distance(begin, end) > N)
				throw std::runtime_error("Span can't contain all these numbers");
			numbers.insert(numbers.end(), begin, end);
		}
};
