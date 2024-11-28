/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:37:10 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/28 20:27:03 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::AMateria(const AMateria &copy)
{
	_type = copy._type;
}

AMateria::~AMateria()
{}

AMateria &AMateria::operator=(const AMateria &copy)
{
	_type = copy._type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter &target)
{
		std::cout << "* How do I use this materia ? *" << std::endl;
}