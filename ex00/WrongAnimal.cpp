/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:04:07 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/27 19:05:41 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal created." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	_type = copy._type;
	std::cout << "Copy of WrongAnimal created." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destoyed." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	this->_type = copy._type;
	std::cout << "WrongAnimal assignment operator called." << std::endl;
	return (*this);
}

std::string WrongAnimal::getType(void)
{
	return (_type);
}

void WrongAnimal::makeSound(void)
{
	std::cout << "Inaudible sound..."  << std::endl;
}