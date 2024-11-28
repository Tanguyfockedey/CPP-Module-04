/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:35:45 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/28 17:39:22 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	public:
		/* Constructors */
		Dog();
		Dog(const Dog &copy);

		/* Destructor */
		virtual ~Dog();

		/* Operator overload */
		Dog &operator=(const Dog &copy);

		/* Member functions */
		void makeSound(void);
		void setIdea(unsigned int i, std::string str);
		void getIdeas(void);

	private:
		Brain *_brain;
};