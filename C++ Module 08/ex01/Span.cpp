/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:16:33 by omanar            #+#    #+#             */
/*   Updated: 2023/05/13 17:01:02 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : N(n) {}

Span::Span(const Span &other) {
	*this = other;
}

Span &Span::operator=(const Span &other) {
	if (this != &other) {
		N = other.N;
		numbers = other.numbers;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int num) {
	if (numbers.size() == N)
		throw std::runtime_error("Span is full");
	numbers.push_back(num);
}

int Span::shortestSpan() const {
	if (numbers.size() <= 1)
		throw std::runtime_error("Span doesn't have enough numbers");
	std::vector<int> sorted_numbers(numbers);
	std::sort(sorted_numbers.begin(), sorted_numbers.end());
	int shortest = sorted_numbers[1] - sorted_numbers[0];
	for (unsigned int i = 2; i < sorted_numbers.size(); i++) {
		int diff = sorted_numbers[i] - sorted_numbers[i-1];
		if (diff < shortest) {
			shortest = diff;
		}
	}
	return shortest;
}

int Span::longestSpan() const {
	if (numbers.size() <= 1)
		throw std::runtime_error("Span doesn't have enough numbers");
	int max = *std::max_element(numbers.begin(), numbers.end());
	int min = *std::min_element(numbers.begin(), numbers.end());
	return max - min;
}
