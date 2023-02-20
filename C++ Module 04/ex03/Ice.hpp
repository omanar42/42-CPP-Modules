/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:46:39 by omanar            #+#    #+#             */
/*   Updated: 2023/02/20 17:47:12 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const & src);
		virtual ~Ice();

		Ice & operator=(Ice const & other);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
