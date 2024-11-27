/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:39:59 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/27 19:12:17 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	Animal animal;
	Cat cat;
	Dog dog;
	std::cout << std::endl;

	std::cout << "- " << animal.getType() << std::endl;
	std::cout << "- " << cat.getType() << std::endl;
	std::cout << "- " << dog.getType() << std::endl;
	std::cout << std::endl;

	Animal animal2(animal);
	Cat cat2(cat);
	Dog dog2(dog);
	std::cout << std::endl;

	animal.makeSound();
	cat.makeSound();
	dog.makeSound();
	std::cout << std::endl;

	WrongCat wrong;
	wrong.makeSound();
	std::cout << std::endl;

	cat = cat2;
	dog = dog2;
	animal = cat;
	std::cout << std::endl;
}
