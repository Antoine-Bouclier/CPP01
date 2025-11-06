/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouclie <abouclie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 10:14:10 by abouclie          #+#    #+#             */
/*   Updated: 2025/11/06 14:19:01 by abouclie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*horde;
	int		zombieAmount = 10;

	horde = zombieHorde(zombieAmount, "groups");
	for (int i = 0; i < zombieAmount; ++i)
		horde[i].announce();
	delete[] horde;
	horde = zombieHorde(-1, "Failed");
	horde = zombieHorde(1, "solo");
	horde[0].announce();
	delete[] horde;
	return (0);
}