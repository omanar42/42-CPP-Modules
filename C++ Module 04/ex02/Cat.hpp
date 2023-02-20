/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:20:15 by omanar            #+#    #+#             */
/*   Updated: 2023/02/20 02:38:12 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain	*brain;
	public:
		Cat(void);
		Cat(Cat const & src);
		~Cat(void);
		Cat & operator=(Cat const & other);

		void	makeSound() const;
};

#endif
