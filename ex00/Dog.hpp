/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:35:45 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/27 18:38:41 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog: public Animal
{
	public:
		/* Constructors */
		Dog();
		Dog(const Dog &copy);

		/* Destructor */
		~Dog();

		/* Operator overload */
		Dog &operator=(const Dog &copy);

		/* Member functions */
		void makeSound(void);
};