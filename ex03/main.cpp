/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:45:46 by yrabby            #+#    #+#             */
/*   Updated: 2023/09/22 16:08:02 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "print.hpp"

void icetest()
{
	{
		title("Ice");
		const AMateria *m = new Ice();
		std::cout << "m type: " << m->getType() << std::endl;
		{
			title("Ice copy");
			const AMateria *m2 = m->clone();
			std::cout << "m2 type: " << m2->getType() << std::endl;
			delete m2;
		}
		delete m;
	}
}

void charTest()
{
	title("Character");
	Ice *ice = new Ice();
	Ice *ice1 = new Ice();
	Ice *ice2 = new Ice();
	Ice *ice3 = new Ice();
	Cure *cure = new Cure();
	Character c("gorge");
	Character c2("putin");

	c.equip(ice);
	c.equip(ice1);
	c.equip(ice2);
	c.equip(ice3);
	c.equip(ice);
	c.unequip(0);
	delete ice;
	c.equip(cure);

	Character c3(c);
	c3.use(0, c2);
	c3.use(1, c2);
	c3.use(5, c2);

	c = c2;
	c3 = c2;
}

void subject_test()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *me = new Character("me");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter *bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

int main(void)
{
	// icetest();
	// charTest();
	subject_test();
	return 0;
}
