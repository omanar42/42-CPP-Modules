/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 13:24:41 by omanar            #+#    #+#             */
/*   Updated: 2023/05/13 17:59:03 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <stdlib.h>

class Zombie {
	private:
		int id;
		std::string name;
	public:
		Zombie();
		~Zombie();
		void announce( void );
		void SetZombie(std::string name, int id);
};

#endif
