
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define NBR 4

int main()
{
	const Animal** animals = new  const Animal*[NBR];

	for (int i=0; i < NBR; i++)
	{
		if (i < NBR / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i=0; i < NBR; i++)
		std::cout << animals[i]->getType() << std::endl;
	
	for (int i=0; i < NBR; i++)
		delete animals[i];
	
	return 0;
}