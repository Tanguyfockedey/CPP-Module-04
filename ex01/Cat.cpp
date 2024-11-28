/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:22:57 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/28 17:03:54 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Cat created." << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &copy): Animal(copy)
{
	std::cout << "Copy of Cat created." << std::endl;
	_type = "Cat";
	_brain = new Brain(*copy._brain);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destroyed." << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Cat assignment operator called." << std::endl;
	if (this != &copy)
	{
		_type = copy._type;
		delete _brain;
		_brain = new Brain(*copy._brain);
	}
	return (*this);
}

void Cat::makeSound(void)
{
	std::cout << "Miauuw..." << std::endl;
}

void Cat::setIdea(unsigned int i, std::string str)
{
	if (i < 100)
		_brain->ideas[i] = str;
}

void Cat::getIdeas(void)
{
	for (int i = 0; i < 100; i++)
		std::cout << _brain->ideas[i] << " ";
	std::cout << std::endl;
}
