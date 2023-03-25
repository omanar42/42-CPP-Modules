/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:16:53 by omanar            #+#    #+#             */
/*   Updated: 2023/03/25 05:51:58 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	private:
		unsigned int	defaultHitPoints;
		unsigned int	defaultEnergyPoints;
		unsigned int	defaultAttackDamage;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap();
		ScavTrap & operator=(ScavTrap const & src);

		void	attack(const std::string& target);
		void	guardGate();
		void	setDefault();

		unsigned int	getDefault(std::string str);
};

#endif
