/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:02:56 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/27 19:03:53 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class WrongAnimal
{
	public:
		/* Constructors */
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);

		/* Destructor */
		~WrongAnimal();

		/* Operator overload */
		WrongAnimal &operator=(const WrongAnimal &copy);

		/* Member functions */
		std::string	getType(void);
		void		makeSound(void);

	protected:
		std::string _type;
};