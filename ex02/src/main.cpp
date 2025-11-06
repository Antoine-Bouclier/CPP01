/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouclie <abouclie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:13:20 by abouclie          #+#    #+#             */
/*   Updated: 2025/11/06 14:20:49 by abouclie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	string;
	std::string	*stringPtr = &string;
	std::string	&stringRef = string;

	string = "HI THIS IS BRAIN";
	std::cout << "Adress of the string:\t\t" << &string << std::endl;
	std::cout << "Adress of the stringPtr:\t" << stringPtr << std::endl;
	std::cout << "Adress of the stringRef:\t" << &stringRef << std::endl;
	std::cout << std::endl;
	std::cout << "Value of the string:\t\t" << string << std::endl;
	std::cout << "Value of the stringPtr:\t\t" << *stringPtr << std::endl;
	std::cout << "Value of the stringRef:\t\t" << stringRef << std::endl;
	return (0);
}