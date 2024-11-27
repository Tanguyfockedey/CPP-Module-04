/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:40:21 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/27 18:56:01 by tafocked         ###   ########.fr       */
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
		~Animal();

		/* Operator overload */
		Animal &operator=(const Animal &copy);

		/* Member functions */
		std::string	getType(void);
		void		makeSound(void);

	protected:
		std::string _type;
};