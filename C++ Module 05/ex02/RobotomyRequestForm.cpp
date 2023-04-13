/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 18:09:21 by omanar            #+#    #+#             */
/*   Updated: 2023/04/13 18:31:26 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("default")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src), target(src.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
	AForm::operator=(obj);
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	this->AForm::execute(executor);
	std::cout << "   | Bzzz Bzzz Bzzz... " << std::endl;
	if (time(NULL) % 2)
		std::cout << "   | " << this->target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "   | Robotomy of " << this->target << " has failed!" << std::endl;
}
