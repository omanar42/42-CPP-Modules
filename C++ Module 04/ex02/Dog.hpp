/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:15:03 by omanar            #+#    #+#             */
/*   Updated: 2023/02/20 02:38:24 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain	*brain;
	public:
		Dog(void);
		Dog(Dog const & src);
		~Dog(void);
		Dog & operator=(Dog const & other);

		void	makeSound() const;
};

#endif
