/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 08:30:02 by omanar            #+#    #+#             */
/*   Updated: 2023/05/13 18:01:46 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

std::string	FindAndReplace(std::string line, std::string s1, std::string s2) {
	size_t pos = 0;
	std::string result;

	while ((pos = line.find(s1, pos)) != std::string::npos) {
		result += line.substr(0, pos) + s2;
		line = line.substr(pos + s1.length());
		pos = 0;
	}
	return (result + line);
}

int	main(int ac, char **av) {
	if (ac != 4) {
		std::cerr << "   | Error: Invalid number of arguments!" << std::endl;
		return (1);
	}

	std::string	filename = av[1];
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	std::string	line;
	std::string	content;
	std::ifstream	infile(filename.c_str());

	if (!infile.is_open()) {
		std::cerr << "   | Error: Unable to open file " << filename << std::endl;
		return (1);
	}
	if (s1.empty()) {
		std::cerr << "   | Warning: First string cannot be empty!" << std::endl;
		return (1);
	}
	while (getline(infile, line)) {
		line = FindAndReplace(line, s1, s2);
		content += line + "\n";
	}
	infile.close();

	filename += ".replace";
	std::ofstream	outfile(filename.c_str());
	if (!outfile.is_open()) {
		std::cerr << "   | Error: Unable to open file " << filename << std::endl;
		return (1);
	}
	outfile << content;
	outfile.close();

	return (0);
}
