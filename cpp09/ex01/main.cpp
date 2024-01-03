


#include "RPN.hpp"


int main(int ac, char **av)
{
    if (ac == 2)
	{
		std::string mathExpress = av[1];
		RPN::calc(mathExpress);
	}
	else 
		std::cout << av[0] << \
			" accept 1 param (inverted Polish mathematical expression) only!" <<std::endl; 
}        