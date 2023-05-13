/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 19:36:32 by omanar            #+#    #+#             */
/*   Updated: 2023/05/13 18:09:08 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) { }

Point::Point(float const x, float const y) : x(x), y(y) { }

Point::Point(Point const & src) :  x(src.getX()), y(src.getY()) { }

Point::~Point() {}

Fixed	Point::getX(void) const {
	return this->x;
}

Fixed	Point::getY(void) const {
	return this->y;
}

Point &	Point::operator=(Point const & src) {
	(void)src;
	return *this;
}
