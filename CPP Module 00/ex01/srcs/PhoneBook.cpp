/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:02:00 by omanar            #+#    #+#             */
/*   Updated: 2022/12/20 12:04:23 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() {
	std::cout << "+------------------------------------------------------+" << std::endl;
	std::cout << "|                                                      |"<< std::endl;
	std::cout << "|       ** P H O N E B O O K  S O F T W A R E **       |" << std::endl;
	std::cout << "|                                                      |" << std::endl;
	std::cout << "|   Available commands:                                |" << std::endl;
	std::cout << "|                                                      |" << std::endl;
	std::cout << "|    ADD    : Add a new contact                        |" << std::endl;
	std::cout << "|    SEARCH : Display a specific contact               |" << std::endl;
	std::cout << "|    EXIT   : Quit the program                         |" << std::endl;
	std::cout << "|                                                      |" << std::endl;
	std::cout << "+------------------------------------------------------+\n" << std::endl;
	std::cout << "   | Welcome To The Crappy Awesome PhoneBook Software!\n" << std::endl;
	index = 0;
}

void	PhoneBook::gatvalue(std::string message, std::string *value) {
	do {
		std::cout << message;
		getline(std::cin, *value);
		if (std::cin.fail() || !std::cin.good()) {
			std::cerr << "\n   | Error: The input stream is closed, The program will be exited!" << std::endl;
			exit (1);
		}
	} while (value->empty());
}

void	PhoneBook::add(void) {
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;

	std::cout << "\n  | Please fill out this form to add new contact\n" << std::endl;
	gatvalue("First Name: ", &FirstName);
	gatvalue("Last Name: ", &LastName);
	gatvalue("Nickname: ", &Nickname);
	gatvalue("Phone Number: ", &PhoneNumber);
	for (int i = 0; i < (int)PhoneNumber.length(); i++) {
		if (i == 0 && PhoneNumber[i] == '+') continue;
		if (!isdigit(PhoneNumber[i])) {
			std::cerr << "   | Attention: Phone number must be a number!" << std::endl;
			gatvalue("Phone Number: ", &PhoneNumber);
			i = -1;
		}
	}
	gatvalue("Darkest Secret: ", &DarkestSecret);
	
	Contact contact(FirstName, LastName, Nickname, PhoneNumber, DarkestSecret);
	contacts[index++] = contact;
	if (index == 8) index = 0;
}

void	PhoneBook::search(void) {
	std::string index;

	std::cout << "\n | Here is your contact list!\n" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	for (int i = 0; i < 8; i++)
		contacts[i].tr_output(i + 1);
	std::cout << "+----------+----------+----------+----------+\n" << std::endl;


	gatvalue("Enter the index of contact you want: ", &index);
	if (index.length() != 1 || !isdigit(index[0])
		|| index[0] - '0' < 1 || index[0] - '0' > 8)
		std::cout << "   | Error : Invalid index!\n" << std::endl;
	else
		contacts[index[0] - '0' - 1].output((index[0] - '0'));
}
