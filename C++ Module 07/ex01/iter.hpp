/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 00:11:07 by omanar            #+#    #+#             */
/*   Updated: 2023/04/17 00:17:01 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void iter(T *arr, size_t length, void (*fun)(T&)) {
	for (size_t i = 0; i < length; i++)
		fun(arr[i]);
}
