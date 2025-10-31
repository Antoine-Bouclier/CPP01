/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouclie <abouclie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:20:00 by abouclie          #+#    #+#             */
/*   Updated: 2025/10/31 14:04:00 by abouclie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weaponType) : _name(name), _weaponType(weaponType) 
{
	this->_name = name;
	this->_weaponType = weaponType;
	std::cout 
		<< this->_name
		<< " created." <<
	std::endl;
}

HumanA::~HumanA()
{
	std::cout 
		<< this->_name
		<< " destroyed." <<
	std::endl;
}
void	HumanA::attack()
{
	std::cout
		<< this->_name
		<< " attacks with their "
		<< this->_weaponType.getType() <<
	std::endl;
}