/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:15:09 by tafocked          #+#    #+#             */
/*   Updated: 2024/12/06 17:03:41 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("test");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}

	// {
	// 	MateriaSource *src1 = new MateriaSource();
	// 	MateriaSource *src2 = new MateriaSource();
	// 	src1->learnMateria(new Ice());
	// 	src1->learnMateria(new Ice());
	// 	src1->learnMateria(new Ice());
	// 	src1->learnMateria(new Ice());
	// 	AMateria *cure = new Cure();
	// 	src1->learnMateria(cure);

	// 	*src2 = *src1;
	// 	std::cout << src2->createMateria("cure");
	// 	delete src1;
	// 	delete src2;
	// 	delete cure;
	// }

	// {
	// 	Character giant("giant"), mage("mage"), healbot;
	// 	MateriaSource orb;
	// 	AMateria *tmp;

	// 	orb.learnMateria(new Ice());
	// 	orb.learnMateria(new Cure());

	// 	mage.equip(orb.createMateria("ice"));
	// 	mage.equip(orb.createMateria("ice"));
	// 	mage.equip(orb.createMateria("ice"));
	// 	mage.equip(orb.createMateria("ice"));
	// 	mage.use(0, giant);
	// 	healbot = mage;
	// 	tmp = healbot.getMateria(3);
	// 	healbot.unequip(3);
	// 	healbot.equip(orb.createMateria("cure"));
	// 	healbot.use(3, mage);
	// 	mage.use(3, giant);
	// 	healbot.use(3, mage);
	// 	delete tmp;
	// }
}
