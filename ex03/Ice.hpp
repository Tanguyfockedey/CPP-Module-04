/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:28:23 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/28 20:31:28 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		/* Constructors */
		Ice();
		Ice(const Ice &copy);

		/* Destructor */
		~Ice();

		/* Operator overload */
		Ice &operator=(const Ice &copy);

		/* Member functions */
		AMateria *clone() const override;
		void use(ICharacter &target) override;
};