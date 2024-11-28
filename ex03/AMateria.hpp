/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:13:13 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/28 19:38:42 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	public:
		/* Constructors */
		AMateria();
		AMateria(const AMateria &copy);

		/* Destructor */
		~AMateria();

		/* Operator overload */
		AMateria &operator=(const AMateria &copy);

		/* Member functions */
		std::string const &getType() const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);

	protected:
		std::string _type;
};
