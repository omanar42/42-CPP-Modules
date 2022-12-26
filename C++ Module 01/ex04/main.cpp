/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <omanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 08:30:02 by omanar            #+#    #+#             */
/*   Updated: 2022/12/26 11:48:28 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void	gatvalue(std::string message, std::string *value) {
	do {
		std::cout << message;
		getline(std::cin, *value);
		if (std::cin.fail() || !std::cin.good()) {
			std::cerr << "\n   | Error: The input stream is closed, The program will be exited!" << std::endl;
			exit (1);
		}
	} while (value->empty());
}

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

int	main() {
	std::string	filename;
	std::string	s1;
	std::string	s2;
	std::string	line;
	std::string	content;

	gatvalue("Enter the filename: ", &filename);
	std::ifstream	infile(filename);
	if (!infile.is_open()) {
		std::cerr << "   | Error: Unable to open file " << filename << std::endl;
		return (1);
	}
	gatvalue("Enter the string to replace: ", &s1);
	gatvalue("Enter the string to replace with: ", &s2);

	while (getline(infile, line)) {
		line = FindAndReplace(line, s1, s2);
		content += line + "\n";
	}
	infile.close();

	filename += ".replace";
	std::ofstream	outfile(filename);
	if (!outfile.is_open()) {
		std::cerr << "   | Error: Unable to open file " << filename << std::endl;
		return (1);
	}
	outfile << content;
	outfile.close();

	return (0);
}
