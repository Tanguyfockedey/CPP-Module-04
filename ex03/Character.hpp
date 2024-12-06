/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:14:21 by tafocked          #+#    #+#             */
/*   Updated: 2024/12/06 16:19:26 by tafocked         ###   ########.fr       */
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
		std::string const &getName(void) const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
		AMateria *getMateria(int idx);

	private:
		std::string _name;
		AMateria *_inventory[4];
};