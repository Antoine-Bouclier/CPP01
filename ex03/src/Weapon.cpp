/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouclie <abouclie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:20:52 by abouclie          #+#    #+#             */
/*   Updated: 2025/11/06 14:27:52 by abouclie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &weapon)
{
	this->setType(weapon);
	std::cout
		<< this->getType()
		<< " created." <<
	std::endl;
}

Weapon::~Weapon()
{
	std::cout
		<< this->getType()
		<< " destroyed." <<
	std::endl;
}
void	Weapon::setType(const std::string &weapon)
{
	this->_type = weapon;
}
const std::string	&Weapon::getType() const
{
	return (_type);
}