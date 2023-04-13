/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 07:46:07 by omanar            #+#    #+#             */
/*   Updated: 2023/04/13 18:40:39 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main() {
	try {
		Bureaucrat	president("President", 0);

		ShrubberyCreationForm shrubbery("home");
		RobotomyRequestForm		robotomy("Bender");
		PresidentialPardonForm	pardon("Bender");

		president.signForm(shrubbery);
		president.signForm(robotomy);
		president.signForm(pardon);

		std::cout << std::endl;
		president.executeForm(shrubbery);
		std::cout << std::endl;
		president.executeForm(robotomy);
		std::cout << std::endl;
		president.executeForm(pardon);
		std::cout << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
