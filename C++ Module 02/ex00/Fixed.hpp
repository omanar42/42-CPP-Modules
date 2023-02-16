/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:34:20 by omanar            #+#    #+#             */
/*   Updated: 2023/02/16 23:05:54 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private:
		int					raw;
		static const int	fractionalBits = 8;
	public:
		Fixed();
		Fixed(Fixed const & src);
		Fixed &	operator=( Fixed const & src );
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif
