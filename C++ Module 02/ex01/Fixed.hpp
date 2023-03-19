/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:34:26 by omanar            #+#    #+#             */
/*   Updated: 2023/03/19 18:24:32 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class Fixed {
	private:
		int					raw;
		static const int	fractionalBits = 8;
	public:
		Fixed();
		Fixed(int const raw);
		Fixed(float const raw);
		Fixed(Fixed const & src);
		Fixed &	operator=( Fixed const & src );
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream &	operator<<(std::ostream & out, Fixed const & src);

#endif
