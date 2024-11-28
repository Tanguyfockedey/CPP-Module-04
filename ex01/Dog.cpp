/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:38:29 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/28 17:40:23 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog created." << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &copy):Animal(copy)
{
	std::cout << "Copy of Dog created." << std::endl;
	_type = "Dog";
	_brain = new Brain(*copy._brain);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destroyed." << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << "Dog assignment operator called." << std::endl;
	if (this != &copy)
	{
		_type = copy._type;
		delete _brain;
		_brain = new Brain(*copy._brain);
	}
	return (*this);
}

void Dog::makeSound(void)
{
	std::cout << "Wouf !" << std::endl;
}

void Dog::setIdea(unsigned int i, std::string str)
{
	if (i < 100)
		_brain->ideas[i] = str;
}

void Dog::getIdeas(void)
{
	for (int i = 0; i < 100; i++)
		std::cout << _brain->ideas[i] << " ";
	std::cout << std::endl;
}
