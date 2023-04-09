/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:03:58 by omanar            #+#    #+#             */
/*   Updated: 2023/04/09 21:19:22 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "IMateriaSource.hpp"
# include "MateriaSource.hpp"
# include "ICharacter.hpp"
# include "Character.hpp"
# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

int	main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}
