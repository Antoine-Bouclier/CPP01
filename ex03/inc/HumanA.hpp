#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	_name;
		Weapon		&_weaponType;
	public:
		HumanA(std::string name, Weapon &weapon_type);
		~HumanA();
		void	attack();
};

#endif