/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:45:46 by yrabby            #+#    #+#             */
/*   Updated: 2023/06/13 12:48:51 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"
# include "Cure.hpp"
# include "Character.hpp"
# include "print.hpp"

void	icetest()
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

void	charTest()
{
	title("Character");
	Ice ice;
	Cure cure;
	Character c("gorge");
	Character c2("putin");

	c.equip(&ice);
	c.equip(&ice);
	c.equip(&ice);
	c.equip(&ice);
	c.equip(&ice);
	c.unequip(0);
	c.equip(&cure);
	
	Character c3(c);
	c3.use(0, c2);
	c3.use(1, c2);
	c3.use(5, c2);

	c = c2;
	c3 = c2;
}

int main( void )
{
	// icetest();
	charTest();
	return 0;
}