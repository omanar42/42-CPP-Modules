/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:22:29 by omanar            #+#    #+#             */
/*   Updated: 2023/03/25 05:52:17 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	private:
		unsigned int	defaultHitPoints;
		unsigned int	defaultEnergyPoints;
		unsigned int	defaultAttackDamage;
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);
		FragTrap & operator=(FragTrap const & rhs);

		void	highFivesGuys(void);
		void	setDefaultValues();
		void	setDefault();

		unsigned int	getDefault(std::string str);
};

#endif
