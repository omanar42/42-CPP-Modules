/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 07:46:07 by omanar            #+#    #+#             */
/*   Updated: 2023/04/10 08:30:26 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {
	try {
		Bureaucrat	Bob("Bob", 1);
		Bureaucrat	Steve("Steve", 2);
		Bureaucrat	John("John", 3);

		Form f1("Form 1", 2, 2);

		Bob.signForm(f1);
		Steve.signForm(f1);
		John.signForm(f1);

	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
