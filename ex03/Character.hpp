/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:14:21 by tafocked          #+#    #+#             */
/*   Updated: 2024/12/03 16:58:05 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: virtual public ICharacter
{
	public:
		/* Constructors */
		Character();
		Character(const std::string &name);
		Character(const Character &copy);

		/* Destructor */
		~Character();

		/* Operator overload */
		Character &operator=(const Character &copy);

		/* Memeber functions */
		virtual std::string const &getName(void) const;
		virtual void equip(AMateria *m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter &target);
		AMateria *getMateria(int idx);

	private:
		std::string _name;
		AMateria *_inventory[4];
};