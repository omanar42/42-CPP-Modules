/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:04:47 by omanar            #+#    #+#             */
/*   Updated: 2023/05/16 11:54:00 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "   | mstack top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "   | mstack size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	std::cout << "   | mstack: ";
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl << std::endl;
	std::stack<int> s(mstack);

	std::cout << "   | s size: " << s.size() << std::endl;
	std::cout << "   | s top: " << s.top() << std::endl;
	std::cout << "   | s: ";
	while (!s.empty())
	{
		std::cout << s.top() << " ";
		s.pop();
	}
	std::cout << std::endl;

	if (s.empty())
		std::cout << "   | s now is empty" << std::endl;
	else
		std::cout << "   | s still not empty" << std::endl;

	return 0;
}
