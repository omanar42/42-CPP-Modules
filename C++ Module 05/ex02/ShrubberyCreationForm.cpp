/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:58:40 by omanar            #+#    #+#             */
/*   Updated: 2023/04/13 15:47:01 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : AForm("Shrubbery", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src), target(src.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
	AForm::operator=(obj);
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getIsSigned() == false)
		throw FormNotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	else {
		std::string filename = this->target + "_shrubbery";
		std::ofstream file(filename);

		if (!file.is_open())
			std::cout << "Error: Can't open file" << std::endl;
		else {
				file << "              ,@@@@@@@,\n"
					<< "      ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
					<< "   ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
					<< "  ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
					<< "  %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
					<< "  %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
					<< "  `&%\\ ` /%&'    |.|        \\ '|8'\n"
					<< "      |o|        | |         | |\n"
					<< "      |.|        | |         | |\n"
					<< "  \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";
			file.close();
		}
	}
}
