/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 19:33:55 by omanar            #+#    #+#             */
/*   Updated: 2023/03/21 22:26:06 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <cstdlib>
# include "Fixed.hpp"

class Point {
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		Point(float const x, float const y);
		Point(Point const & src);
		~Point();

		Point &	operator=(Point const & src);
	
		Fixed	getX(void) const;
		Fixed	getY(void) const;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif
