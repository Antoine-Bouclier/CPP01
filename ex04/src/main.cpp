/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouclie <abouclie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:54:13 by abouclie          #+#    #+#             */
/*   Updated: 2025/11/06 09:44:32 by abouclie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int	main(int argc, char **argv)
{
	std::ifstream		ifs;
	std::ofstream		ofs;
	std::stringstream	buffer;
	std::string			filename, content, s1, s2;
	std::size_t			pos;
	
	if (argc != 4)
	{
		std::cerr << "Usage: ./replace <filename> <s1> <s2>\n";
		return (1);
	}
	filename = argv[1], s1 = argv[2], s2 = argv[3];
	ifs.open(argv[1]);
	if (!ifs.is_open())
	{
		std::cerr << "Error opening file\n";
		return (1);
	}
	buffer << ifs.rdbuf();
	ifs.close();
	content = buffer.str();
	while ((pos = content.find(s1)) != std::string::npos)
	{
		content.erase(pos, s1.length());
		content.insert(pos, s2);
	}
	filename += ".replace";
	ofs.open(filename.c_str());
	if (!ofs.is_open())
	{
		std::cerr << "Error opening file\n";
		return (1);
	}
	ofs.write(content.c_str(), content.length());
	ofs.close();
	return (0);
}
