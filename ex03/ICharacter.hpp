/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:27:47 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/29 18:03:50 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class AMateria;

class ICharacter
{
	public:
		/* Constructors */
		ICharacter();
		ICharacter(const ICharacter &copy);

		/* Destructor */
		virtual ~ICharacter();

		/* Operator overload */
		ICharacter &operator=(const ICharacter &copy);

		/* Member functions */
		virtual std::string const &getName(void) const = 0;
		virtual void equip(AMateria *m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter &target) = 0;
};