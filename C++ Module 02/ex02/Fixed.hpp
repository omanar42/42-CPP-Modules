/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:24:48 by omanar            #+#    #+#             */
/*   Updated: 2023/03/19 19:25:08 by omanar           ###   ########.fr       */
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

		bool	operator>( Fixed const & src ) const;
		bool	operator<( Fixed const & src ) const;
		bool	operator>=( Fixed const & src ) const;
		bool	operator<=( Fixed const & src ) const;
		bool	operator==( Fixed const & src ) const;
		bool	operator!=( Fixed const & src ) const;

		Fixed	operator+( Fixed const & src ) const;
		Fixed	operator-( Fixed const & src ) const;
		Fixed	operator*( Fixed const & src ) const;
		Fixed	operator/( Fixed const & src ) const;

		Fixed &	operator++();
		Fixed	operator++(int);
		Fixed &	operator--();
		Fixed	operator--(int);

		static Fixed &	min(Fixed & a, Fixed & b);
		static Fixed &	max(Fixed & a, Fixed & b);
		static Fixed const &	min(Fixed const & a, Fixed const & b);
		static Fixed const &	max(Fixed const & a, Fixed const & b);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream &	operator<<(std::ostream & out, Fixed const & src);

#endif
