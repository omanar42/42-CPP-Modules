/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 08:05:54 by omanar            #+#    #+#             */
/*   Updated: 2023/04/10 08:17:15 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("none"), isSigned(false), gradeToSign(150), gradeToExecute(150) {}

AForm::AForm(std::string const &name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150)
		throw AForm::GradeTooLowException();
	if (gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &src) : name(src.name), isSigned(src.isSigned), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute) {
	if (gradeToSign < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150)
		throw AForm::GradeTooLowException();
	if (gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::~AForm() {}

AForm &AForm::operator=(AForm const &obj)
{
	if (this != &obj)
		this->isSigned = obj.isSigned;
	return (*this);
}

std::string const	AForm::getName() const
{
	return (this->name);
}

bool	AForm::getIsSigned() const
{
	return (this->isSigned);
}

int	AForm::getGradeToSign() const
{
	return (this->gradeToSign);
}

int	AForm::getGradeToExecute() const
{
	return (this->gradeToExecute);
}

void	AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->gradeToSign)
		this->isSigned = true;
	else
		throw AForm::GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return ("Form is not signed");
}

std::ostream &operator<<(std::ostream &out, AForm const &obj)
{
	out << obj.getName() << ":\n   | Form grade to sign: " << obj.getGradeToSign() << "\n   | Form grade to execute: " << obj.getGradeToExecute() << std::endl;
	if (obj.getIsSigned())
		out << "   | Form is signed" << std::endl;
	else
		out << "   | Form is not signed" << std::endl; 
	return (out);
}
