/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 00:25:02 by omanar            #+#    #+#             */
/*   Updated: 2023/04/17 01:42:56 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {

	std::cout << "Creating an object" << std::endl;
	Array<int> arr(10);
	std::cout << " | arr size: " << arr.size() << std::endl;
	for (unsigned int i = 0; i < arr.size(); i++)
		arr[i] = i + 1;
	for (unsigned int i = 0; i < arr.size(); i++)
		std::cout << "   | arr[" << i << "] = " << arr[i] << std::endl;


	std::cout << "\nCreating object using copy constructor" << std::endl;
	Array<int> arr2(arr);
	std::cout << " | arr2 size: " << arr2.size() << std::endl;
	for (unsigned int i = 0; i < arr2.size(); i++) {
		std::cout << "   | arr2[" << i << "] = " << arr2[i] << std::endl;
	}

	std::cout << "\nCreating object using assignment operator" << std::endl;
	Array<int> arr3;
	arr3 = arr;
	std::cout << " | arr3 size: " << arr3.size() << std::endl;
	for (unsigned int i = 0; i < arr3.size(); i++) {
		std::cout << "   | arr3[" << i << "] = " << arr3[i] << std::endl;
	}

	std::cout << "\nTest accessing element out of bounds" << std::endl;
	try {
		std::cout << "   | arr[11] = " << arr[11] << std::endl;
	} catch (std::exception& e) {
		std::cout << "catch: " << e.what() << std::endl;
	}

	std::cout << "\nTest modifying an element" << std::endl;
	arr[2] = 42;
	std::cout << "   | arr[2] = " << arr[2] << std::endl;

	return 0;
}
