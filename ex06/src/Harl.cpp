#include "Harl.hpp"

/* -- private methods -- */

void	Harl::debug(void)
{
	std::cout
		<< "I love having extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-specialketchup burger. "
		<< "I really do!" <<
	std::endl;
}

void	Harl::info(void)
{
	std::cout
		<< "I cannot believe adding extra bacon costs more money. "
		<< "You didn’t put enough bacon in my burger! If you did, "
		<< "I wouldn’t be asking for more!" <<
	std::endl;
}
void	Harl::warning(void)
{
	std::cout
		<< "I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming for years, "
		<< "whereas you started working here just last month." <<
	std::endl;
}

void	Harl::error(void)
{
	std::cout
		<< "This is unacceptable! I want to speak to the manager now." <<
	std::endl;
}

/* -- Public methods -- */

void	Harl::complain(std::string level)
{
	void		(Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int	i;
	for (i = 0; i < 4; i++)
	{
		if (level.compare(complains[i]) == 0)
			break;
	}
	switch (i)
	{
		case 0:
			(this->*ptr[0])();
		case 1:
			(this->*ptr[1])();
		case 2:
			(this->*ptr[2])();
		case 3:
			(this->*ptr[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}