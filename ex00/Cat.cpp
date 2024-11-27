/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:22:57 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/27 18:38:58 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	_type = "Cat";
	std::cout << "Cat created." << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy)
{
	_type = "Cat";
	std::cout << "Copy of Cat created." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destroyed." << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	_type = copy._type;
	std::cout << "Cat assignment operator called." << std::endl;
	return (*this);
}

void Cat::makeSound(void)
{
	std::cout << "Miauuw..." << std::endl;
}
