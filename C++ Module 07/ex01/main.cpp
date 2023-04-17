/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 00:11:09 by omanar            #+#    #+#             */
/*   Updated: 2023/04/17 01:45:01 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void display(T &i) {
	std::cout << "   | " << i << std::endl;
}

int main() {
	std::cout << "Test with int array" << std::endl;
	int arr[] = {1, 2, 3, 4, 5};
	iter(arr, 5, display);

	std::cout << "\nTest with char array" << std::endl;
	char arr2[] = {'a', 'b', 'c', 'd', 'e'};
	iter(arr2, 5, display);

	return 0;
}
