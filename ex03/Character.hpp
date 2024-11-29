/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:14:21 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/29 18:03:27 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"


class Character: public ICharacter
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
		void setName(const std::string &name);
		virtual std::string const &getName(void) const;

		virtual void equip(AMateria *m);
		virtual void unequip(int idx);
		virtual void use(int idxm, ICharacter &target);
		int inInventory(AMateria *m);

	private:
		std::string _name;
		AMateria *_inventory[4];
};