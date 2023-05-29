/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:48:46 by omanar            #+#    #+#             */
/*   Updated: 2023/05/29 23:43:12 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <list>
#include <exception>
#include <iomanip>

void	isValid(std::string str);
void	PmergeMeVec(std::vector<std::pair<unsigned int, unsigned int> > &container);
void	PmergeMeLst(std::list<std::pair<unsigned int, unsigned int> > &container);