/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 13:56:49 by omanar            #+#    #+#             */
/*   Updated: 2023/03/13 02:12:13 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
	std::string		string("HI THIS IS BRAIN");
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "Memory Addresses" << std::endl;
	std::cout << "  | string    : " << &string << std::endl;
	std::cout << "  | stringPTR : " << stringPTR << std::endl;
	std::cout << "  | stringREF : " << &stringREF << std::endl;

	std::cout << "\nValues" << std::endl;
	std::cout << "  | string    : " << string << std::endl;
	std::cout << "  | stringPTR : " << *stringPTR << std::endl;
	std::cout << "  | stringREF : " << stringREF << std::endl;
	return 0;
}
