/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:47:36 by omanar            #+#    #+#             */
/*   Updated: 2023/05/13 16:57:24 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include "easyfind.hpp"

int main() {
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    
    try {
        std::vector<int>::iterator it = easyfind(v, 3);
        std::cout << "Value found at index " << std::distance(v.begin(), it) << '\n';
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << '\n';
    }
    try {
        std::vector<int>::iterator it = easyfind(v, 6);
        std::cout << "Value found at index " << std::distance(v.begin(), it) << '\n';
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << '\n';
    }
}
