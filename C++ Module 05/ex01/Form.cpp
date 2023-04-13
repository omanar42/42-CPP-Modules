/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 08:05:54 by omanar            #+#    #+#             */
/*   Updated: 2023/04/13 20:30:46 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("none"), isSigned(false), gradeToSign(150), gradeToExecute(150) {}

Form::Form(std::string const &name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150)
		throw GradeTooLowException();
	if (gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToExecute > 150)
		throw GradeTooLowException();
}

Form::Form(Form const &src) : name(src.name), isSigned(false), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute) {}

Form::~Form() {}

Form &Form::operator=(Form const &obj)
{
	if (this != &obj)
		this->isSigned = obj.isSigned;
	return (*this);
}

std::string const	Form::getName() const
{
	return (this->name);
}

bool	Form::getIsSigned() const
{
	return (this->isSigned);
}

int	Form::getGradeToSign() const
{
	return (this->gradeToSign);
}

int	Form::getGradeToExecute() const
{
	return (this->gradeToExecute);
}

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->gradeToSign)
		this->isSigned = true;
	else
		throw GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::ostream &operator<<(std::ostream &out, Form const &obj)
{
	out << obj.getName() << ", form grade to sign: " << obj.getGradeToSign() << ", form grade to execute: " << obj.getGradeToExecute() << ", form is signed: " << obj.getIsSigned();
	return (out);
}
