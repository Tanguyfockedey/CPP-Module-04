/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:39:59 by tafocked          #+#    #+#             */
/*   Updated: 2024/12/06 16:09:58 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	{
		const Animal *cat = new Cat();
		const Animal *dog = new Dog();
		std::cout << std::endl;

		delete dog;
		delete cat;
	}

	// {
	// 	Animal *house[5];
	// 	std::cout << std::endl;
	// 	for (int i = 0; i < 5; i++)
	// 	{
	// 		if (i % 2)
	// 			house[i] = new Dog();
	// 		else
	// 			house[i] = new Cat();
	// 		std::cout << std::endl;
	// 	}
	// 	std::cout << std::endl;
	// 	for (int i = 0; i < 5; i++)
	// 	{
	// 		std::cout << house[i]->getType() << ": ";
	// 		house[i]->makeSound();
	// 	}
	// 	std::cout << std::endl;
	// 	for (int i = 0; i < 5; i++)
	// 	{
	// 		delete house[i];
	// 		std::cout << std::endl;
	// 	}
	// }
	
	// {
	// 	std::cout << std::endl;
	// 	Cat cat;
	// 	cat.setIdea(0, "Mouse");
	// 	std::cout << std::endl;

	// 	Cat cat2(cat);
	// 	cat2.setIdea(1, "Bird");
	// 	std::cout << std::endl;

	// 	Cat cat3;
	// 	cat3 = cat2;
	// 	std::cout << std::endl;
		
	// 	cat.setIdea(0, "");
	// 	cat2.setIdea(1, "");
	// 	cat3.getIdeas();
	// }
}
