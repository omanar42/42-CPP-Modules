/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:04:31 by omanar            #+#    #+#             */
/*   Updated: 2023/04/13 21:37:03 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const & src) {
	*this = src;
}

Intern::~Intern() {}

Intern & Intern::operator=(Intern const & other)
{
	(void)other;
	return *this;
}

AForm *Intern::makeForm(std::string const & formName, std::string const & formtarget)
{
	std::string names[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

	for (int i = 0; i < 3; i++) {
		if (names[i] == formName) {
			std::cout << "   | Intern creates " << formName << std::endl;
			switch (i) {
				case 0:
					return new RobotomyRequestForm(formtarget);
				case 1:
					return new PresidentialPardonForm(formtarget);
				case 2:
					return new ShrubberyCreationForm(formtarget);
			}
		}
	}
	throw Intern::UnknownFormException();
	return NULL;
}

const char* Intern::UnknownFormException::what() const throw()
{
	return "   | Intern doesn't know this form";
}
