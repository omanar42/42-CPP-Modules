/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 00:24:58 by omanar            #+#    #+#             */
/*   Updated: 2023/04/17 01:26:06 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array {
	private:
		T *arr;
		unsigned int _size;
	public:
		Array() : arr(nullptr), _size(0) {}
		Array(unsigned int n) : arr(new T[n]), _size(n) {
			for (unsigned int i = 0; i < _size; i++)
				arr[i] = T();
		}
		Array(Array const &src) : arr(new T[src._size]), _size(src._size) {
			for (unsigned int i = 0; i < _size; i++)
				arr[i] = src.arr[i];
		}
		~Array() {
			delete [] arr;
		}

		Array &operator=(Array const &obj) {
			if (this != &obj) {
				delete [] arr;
				_size = obj._size;
				arr = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					arr[i] = obj.arr[i];
			}
			return *this;
		}

		T &operator[](unsigned int i) {
			if (i >= _size)
				throw std::exception();
			return arr[i];
		}

		unsigned int size() const {
			return _size;
		}
};
