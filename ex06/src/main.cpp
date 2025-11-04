#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harlFilter;

	if (argc == 2)
		harlFilter.complain(argv[1]);
	else
		std::cout << "./HarlFilter [log level]" << std::endl;
}