/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 07:39:47 by omanar            #+#    #+#             */
/*   Updated: 2023/04/12 05:54:55 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("none"), grade(150) {}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name), grade(grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : name(src.name), grade(src.grade) {
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj)
{
	if (this != &obj)
		this->grade = obj.grade;
	return (*this);
}

std::string const	Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::incrementGrade()
{
	if (this->grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade++;
}

void	Bureaucrat::signForm(AForm &form)
{
	try {
		form.beSigned(*this);
		std::cout << "   | " << this->name << " signed " << form.getName() << std::endl;
	} catch (std::exception &e) {
		std::cout << "   | " << this->name << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &form)
{
	try {
		form.execute(*this);
		std::cout << "   | " << this->name << " executed " << form.getName() << std::endl;
	} catch (std::exception &e) {
		std::cout << "   | " << this->name << " couldn’t execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &obj)
{
	out << "   | " << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return (out);
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("   | Grade is too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("   | Grade is too low!");
}
