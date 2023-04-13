/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 07:46:07 by omanar            #+#    #+#             */
/*   Updated: 2023/04/13 20:25:54 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main() {
	try {
		Intern	someRandomIntern;
		AForm*	rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");

		delete rrf;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
