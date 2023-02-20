/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:47:35 by omanar            #+#    #+#             */
/*   Updated: 2023/02/20 17:47:44 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const & src);
		virtual ~Cure();

		Cure & operator=(Cure const & other);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
