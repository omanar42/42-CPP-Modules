/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:57:01 by omanar            #+#    #+#             */
/*   Updated: 2023/05/30 10:22:15 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <cmath>


class BitcoinExchange {
	private:
		std::map<std::string, float> data;
		BitcoinExchange();
	public:
		BitcoinExchange(std::string const & filename);
		BitcoinExchange(BitcoinExchange const & src);
		BitcoinExchange & operator=(BitcoinExchange const & other);
		~BitcoinExchange();
		
		void loadData();
		void handleData(std::string const & filename);

		bool isValidDate(std::string const & date) const;
		bool isValidValue(float value) const;
		bool isHeader(std::string const & line) const;
};
