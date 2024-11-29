/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:28:17 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/29 16:29:57 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria()
{
	_type = "ice";
}

Ice::Ice(const Ice &copy): AMateria(copy)
{}

Ice::~Ice()
{}

Ice &Ice::operator=(const Ice &copy)
{
	_type = copy._type;
	return (*this);
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* Shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
