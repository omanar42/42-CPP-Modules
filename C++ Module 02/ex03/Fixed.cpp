/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 19:31:00 by omanar            #+#    #+#             */
/*   Updated: 2023/03/19 19:31:01 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : raw(0) { }

Fixed::Fixed(int const raw) : raw(raw << fractionalBits) { }

Fixed::Fixed(float const raw) : raw(roundf(raw * (1 << fractionalBits))) { }

Fixed::Fixed(Fixed const & src) {
	*this = src;
}

Fixed &	Fixed::operator=(Fixed const & src) {
	setRawBits(src.getRawBits());
	return *this;
}

Fixed::~Fixed() { }

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

bool	Fixed::operator>(Fixed const & src) const {
	return this->raw > src.getRawBits();
}

bool	Fixed::operator<(Fixed const & src) const {
	return this->raw < src.getRawBits();
}

bool	Fixed::operator>=(Fixed const & src) const {
	return this->raw >= src.getRawBits();
}

bool	Fixed::operator<=(Fixed const & src) const {
	return this->raw <= src.getRawBits();
}

bool	Fixed::operator==(Fixed const & src) const {
	return this->raw == src.getRawBits();
}

bool	Fixed::operator!=(Fixed const & src) const {
	return this->raw != src.getRawBits();
}

Fixed	Fixed::operator+(Fixed const & src) const {
	return Fixed(this->toFloat() + src.toFloat());
}

Fixed	Fixed::operator-(Fixed const & src) const {
	return Fixed(this->toFloat() - src.toFloat());
}

Fixed	Fixed::operator*(Fixed const & src) const {
	return Fixed(this->toFloat() * src.toFloat());
}

Fixed	Fixed::operator/(Fixed const & src) const {
	return Fixed(this->toFloat() / src.toFloat());
}

Fixed &	Fixed::operator++() {
	this->raw++;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed tmp(*this);
	this->raw++;
	return tmp;
}

Fixed &	Fixed::operator--() {
	this->raw--;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed tmp(*this);
	this->raw--;
	return tmp;
}

Fixed &	Fixed::min(Fixed & a, Fixed & b) {
	return a < b ? a : b;
}

Fixed &	Fixed::max(Fixed & a, Fixed & b) {
	return a > b ? a : b;
}

Fixed const &	Fixed::min(Fixed const & a, Fixed const & b) {
	return a < b ? a : b;
}

Fixed const &	Fixed::max(Fixed const & a, Fixed const & b) {
	return a > b ? a : b;
}
