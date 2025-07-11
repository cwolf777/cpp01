/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:33:50 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/09 14:03:45 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"
#include <fstream>
#include <iostream>

Replacer::Replacer(std::string filename, std::string s1, std::string s2) : _filename(filename), _s1(s1), _s2(s2) {}

bool Replacer::process()
{
	std::ifstream infile(_filename);
	if (!infile)
	{
		std::cerr << "Could not open input file.\n";
		return false;
	}
	
	std::ofstream outfile(_filename + ".replace");
	if(!outfile)
	{
		std::cerr << "Could not create output file\n";
		return false;
	}
	
	std::string line;
	while (std::getline(infile, line))
	{
		size_t pos = 0;
		while((pos = line.find(_s1, pos)) != std::string::npos)
		{
			line = line.substr(0, pos) + _s2 + line.substr(pos + _s1.length());
			pos += _s2.length();
		}
		outfile << line << "\n";
	}
	infile.close();
	outfile.close();
	return true;
}

