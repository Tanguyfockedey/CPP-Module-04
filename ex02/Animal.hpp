/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:40:21 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/28 19:03:34 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Animal
{
	public:
		/* Constructors */
		Animal();
		Animal(const Animal &copy);

		/* Destructor */
		virtual ~Animal();

		/* Operator overload */
		Animal &operator=(const Animal &copy);

		/* Member functions */
		std::string getType(void) const;
		virtual void makeSound(void) const = 0;

	protected:
		std::string _type;
};