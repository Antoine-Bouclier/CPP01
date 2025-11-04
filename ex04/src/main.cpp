/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouclie <abouclie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:54:13 by abouclie          #+#    #+#             */
/*   Updated: 2025/11/04 19:10:44 by abouclie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
// #include <string>
// ofstream - docs a regarder

int	main()
{
	std::ifstream	inputFile("files/abc.txt");
	std::string		line;

	while (getline(inputFile, line))
	{
		std::cout << line << std::endl;
	}
	inputFile.close();
	return (0);
}