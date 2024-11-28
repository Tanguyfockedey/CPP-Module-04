/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:27:47 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/28 19:34:55 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class ICharacter
{
	public:
		/* Constructors */
		ICharacter();
		ICharacter(const ICharacter &copy);

		/* Destructor */
		~ICharacter();

		/* Operator overload */
		ICharacter &operator=(const ICharacter &copy);

		/* Member functions */
		virtual std::string const &getName(void) const = 0;
		virtual void equip(AMateria *m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idxm, ICharacter &target) = 0;
};