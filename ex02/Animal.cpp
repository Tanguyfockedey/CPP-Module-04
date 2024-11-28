/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:46:07 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/28 18:58:16 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal created." << std::endl;
}

Animal::Animal(const Animal &copy)
{
	_type = copy._type;
	std::cout << "Copy of Animal created." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destoyed." << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
	this->_type = copy._type;
	std::cout << "Animal assignment operator called." << std::endl;
	return (*this);
}

std::string Animal::getType(void) const
{
	return (_type);
}

void Animal::makeSound(void) const
{
	std::cout << "Inaudible sound..."  << std::endl;
}