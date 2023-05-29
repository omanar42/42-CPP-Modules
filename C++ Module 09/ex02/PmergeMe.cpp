/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:48:44 by omanar            #+#    #+#             */
/*   Updated: 2023/05/27 17:14:10 by omanar           ###   ########.fr       */
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
