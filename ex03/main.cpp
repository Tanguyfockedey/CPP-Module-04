/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:15:09 by tafocked          #+#    #+#             */
/*   Updated: 2024/12/03 19:26:30 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	// {	
	// 	IMateriaSource* src = new MateriaSource();
	// 	src->learnMateria(new Ice());
	// 	src->learnMateria(new Cure());

	// 	ICharacter* me = new Character("me");
	// 	AMateria* tmp;
	// 	tmp = src->createMateria("ice");
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("test");
	// 	me->equip(tmp);
	// 	ICharacter* bob = new Character("bob");
	// 	me->use(0, *bob);
	// 	me->use(1, *bob);

	// 	delete bob;
	// 	delete me;
	// 	delete src;
	// }
	{
		MateriaSource *src1 = new MateriaSource();
		MateriaSource *src2 = new MateriaSource();
		src1->learnMateria(new Ice());
		src1->learnMateria(new Ice());
		src1->learnMateria(new Ice());
		src1->learnMateria(new Ice());
		src1->learnMateria(new Cure());

		*src2 = *src1;
		std::cout << src2->createMateria("cure");
		delete src1;
		delete src2;
	}
}
