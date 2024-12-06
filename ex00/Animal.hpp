/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:40:21 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/30 17:31:46 by tafocked         ###   ########.fr       */
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
		std::string getType(void);
		virtual void makeSound(void);

	protected:
		std::string _type;
};