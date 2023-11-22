
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"


void test()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("asdasd");
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	ICharacter* bob = new Character("walid");
	*bob = *me;
	delete me;
	// bob->unequip(0);


	delete bob;
	delete src;
	// delete me;
}

int main()
{
	test();
	// system("leaks a.out");
	return 0;
}
