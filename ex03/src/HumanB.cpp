/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouclie <abouclie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:19:58 by abouclie          #+#    #+#             */
/*   Updated: 2025/10/31 14:37:32 by abouclie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_isArmed = false;
	std::cout 
		<< this->_name
		<< " created." <<
	std::endl;
}
HumanB::~HumanB()
{
	std::cout 
		<< this->_name
		<< " destroyed." <<
	std::endl;
}

void	HumanB::attack()
{
	if (this->_isArmed)
	{
		std::cout
			<< this->_name
			<< " attacks with their "
			<< this->_weaponType->getType() <<
		std::endl;
	}
	else
	{
		std::cout
			<< this->_name
			<< " can't attack." <<
		std::endl;
	}
}
void	HumanB::setWeapon(Weapon &weaponType)
{
	this->_isArmed = true;
	this->_weaponType = &weaponType;
}