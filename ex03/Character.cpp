/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 16:48:14 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/29 17:52:35 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): ICharacter()
{}

Character::Character(const std::string &name): ICharacter(), _name(name)
{}

Character::Character(const Character &copy): ICharacter(copy)
{
	*this = copy;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

Character &Character::operator=(const Character &copy)
{
	if (this != &copy)
	{
		delete this;
		this->_name = copy._name;
		for (int i = 0; i < 4; i++)
		{
			if (copy._inventory[i])
				this->_inventory[i] = copy._inventory[i];
		}
	}
	return (*this);
}

void Character::setName(const std::string &name)
{
	this->_name = name;
}

std::string const &Character::getName(void) const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	(void)m;
}

void Character::unequip(int idx)
{
	(void)idx;
}

void Character::use(int idx, ICharacter &target)
{
	(void)idx;
	(void)target;
}