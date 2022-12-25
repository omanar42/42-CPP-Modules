/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:05:34 by omanar            #+#    #+#             */
/*   Updated: 2022/12/20 12:02:44 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact() { }

Contact::Contact(
	std::string first_name,
	std::string last_name,
	std::string nickname,
	std::string phone_number,
	std::string darkest_secret) :
	FirstName(first_name),
	LastName(last_name),
	Nickname(nickname),
	PhoneNumber(phone_number),
	DarkestSecret(darkest_secret) {
		std::cout << "\n  | A new contact has been created!\n" << std::endl;
}

void	Contact::output(int n) {
	if (FirstName.empty()) {
		std::cout << "   | No contact found!\n" << std::endl;
		return ;
	}
	std::cout << "\n -------------------- Contact " << n << " ---------------------\n" << std::endl;
	std::cout << "  | First Name: " << FirstName << std::endl;
	std::cout << "  | Last Name: " << LastName << std::endl;
	std::cout << "  | Nickname: " << Nickname << std::endl;
	std::cout << "  | Phone Number: " << PhoneNumber << std::endl;
	std::cout << "  | Darkest Secret: " << DarkestSecret << std::endl;
	std::cout << "\n ----------------------------------------------------\n" << std::endl;
}

void	Contact::th_output(std::string str) {
	if (str.length() > 10)
		std::cout.write(str.c_str(), 9) << ".|";
	else
		std::cout << std::setw(10) << str << "|";
}

void	Contact::tr_output(int index) {
	if (!FirstName.empty()) {
		std::cout << "|" << std::setw(10) << index << "|";
		th_output(FirstName);
		th_output(LastName);
		th_output(Nickname);
		std::cout << std::endl;
	}
}
