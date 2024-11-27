/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:38:29 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/27 18:38:46 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	_type = "Dog";
	std::cout << "Dog created." << std::endl;
}

Dog::Dog(const Dog &copy):Animal(copy)
{
	_type = "Dog";
	std::cout << "Copy of Dog created." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed." << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	_type = copy._type;
	std::cout << "Dog assignment operator called." << std::endl;
	return (*this);
}

void Dog::makeSound(void)
{
	std::cout << "Wouf !" << std::endl;
}
