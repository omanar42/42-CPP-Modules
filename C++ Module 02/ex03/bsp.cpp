/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 19:39:58 by omanar            #+#    #+#             */
/*   Updated: 2023/03/21 22:26:04 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float area(Point const a, Point const b, Point const c)
{
	float x1 = a.getX().toInt();
	float x2 = b.getX().toFloat();
	float x3 = c.getX().toFloat();
	float y1 = a.getY().toFloat();
	float y2 = b.getY().toFloat();
	float y3 = c.getY().toFloat();

	float area = abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);

	return area;
}

bool	bsp( Point const a, Point const b, Point const c, Point const point) {
	float abc = area(a, b, c);
	float pbc = area(point, b, c);
	float apc = area(a, point, c);
	float abp = area(a, b, point);

	if (pbc == 0 || apc == 0 || abp == 0)
		return false;
	if (pbc + apc + abp == abc)
		return true;
	return false;
}
