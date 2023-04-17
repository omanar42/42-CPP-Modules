/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 21:28:39 by omanar            #+#    #+#             */
/*   Updated: 2023/04/17 04:41:47 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

struct Data {
	int value;
	std::string name;
};

class Serializer
{
	private:
		Serializer();
	public:
		~Serializer();
		Serializer(Serializer const & src);
		Serializer & operator=(Serializer const & obj);

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};
