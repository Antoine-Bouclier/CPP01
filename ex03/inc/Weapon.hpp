#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class	Weapon
{
	private:
		std::string	_type;
	public:
		Weapon(const std::string &Weapon);
		~Weapon();
		void				setType(const std::string &weapon);
		const std::string	&getType() const;
};

#endif