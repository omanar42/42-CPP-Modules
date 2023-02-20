/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:53:06 by omanar            #+#    #+#             */
/*   Updated: 2023/02/20 03:31:27 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal {
	protected:
		std::string	type;
	public:
		Animal(void);
		Animal(Animal const & src);
		virtual ~Animal(void);
		Animal & operator=(Animal const & other);

		std::string	getType(void) const;
		virtual void makeSound(void) const = 0;
};

#endif
