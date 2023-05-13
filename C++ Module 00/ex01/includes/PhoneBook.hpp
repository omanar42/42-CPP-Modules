/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:03:28 by omanar            #+#    #+#             */
/*   Updated: 2023/05/13 17:58:00 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include "Contact.hpp"

class PhoneBook {
	private:
		int index;
		Contact contacts[8];
		void gatvalue(std::string message, std::string *value);
	public:
		PhoneBook();
		void add(void);
		void search(void);
};

#endif
