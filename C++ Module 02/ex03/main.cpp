/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:21:53 by omanar            #+#    #+#             */
/*   Updated: 2023/03/21 22:32:14 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main() {
	Point a(15, 30);
	Point b(0, 0);
	Point c(30, 0);
	Point point(15, 15);

	if (bsp(a, b, c, point))
		std::cout << "   | This point is Inside the triangle" << std::endl;
	else
		std::cout << "   | This point is Outside the triangle" << std::endl;

	return 0;
}
