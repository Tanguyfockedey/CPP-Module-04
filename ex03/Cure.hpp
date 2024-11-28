/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:04:19 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/28 20:25:36 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		/* Constructors */
		Cure();
		Cure(const Cure &copy);

		/* Destructor */
		~Cure();

		/* Operator overload */
		Cure &operator=(const Cure &copy);

		/* Member functions */
		AMateria *clone() const override;
		void use(ICharacter &target) override;
};