/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:31:53 by omanar            #+#    #+#             */
/*   Updated: 2023/03/19 18:22:17 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : raw(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const raw) : raw(raw << fractionalBits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const raw) : raw(roundf(raw * (1 << fractionalBits))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &	Fixed::operator=(Fixed const & src) {
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(src.getRawBits());
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const {
	return this->raw;
}

void	Fixed::setRawBits( int const raw ) {
	this->raw = raw;
}

float	Fixed::toFloat( void ) const {
	return (float)this->raw / (1 << fractionalBits);
}

int		Fixed::toInt( void ) const {
	return this->raw >> fractionalBits;
}

std::ostream &	operator<<(std::ostream & out, Fixed const & src) {
	out << src.toFloat();
	return out;
}
