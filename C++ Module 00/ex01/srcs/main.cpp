/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:20:03 by omanar            #+#    #+#             */
/*   Updated: 2022/12/20 12:07:20 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"

int	main(void) {
	std::string command;
	PhoneBook phonebook;
	
	do {
		std::cout << "Please enter a command: ";
		getline(std::cin, command);
		if (std::cin.fail() || !std::cin.good())
			break;
		for (int j = 0; j < (int)command.length(); j++)
			command[j] = toupper(command[j]);
		if (command == "ADD")
			phonebook.add();
		else if (command == "SEARCH")
			phonebook.search();
	} while (command != "EXIT");
	std::cout << "\n   | Thank you for using our PhoneBook Software!\n" << std::endl;
	return (0);
}
