/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 21:28:35 by omanar            #+#    #+#             */
/*   Updated: 2023/04/15 21:36:10 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
	Data data;
	data.value = 42;
	data.name = "Forty-two";

	uintptr_t serialized = Serializer::serialize(&data);
	Data* deserialized = Serializer::deserialize(serialized);

	if (deserialized == &data) {
		std::cout << "Serialization successful\n";
	} else {
		std::cout << "Serialization failed\n";
	}

	return 0;
}
