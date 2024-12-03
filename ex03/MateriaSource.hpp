/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:56:24 by tafocked          #+#    #+#             */
/*   Updated: 2024/12/03 19:33:10 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		/* Constructors */
		MateriaSource();
		MateriaSource(const MateriaSource &copy);

		/* Destructor */
		~MateriaSource();

		/* Operator overload */
		MateriaSource &operator=(const MateriaSource &copy);

		/* Member funtions */
		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const &type);

	private:
		AMateria *_codex[4];
};
