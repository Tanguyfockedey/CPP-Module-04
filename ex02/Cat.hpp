/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:55:12 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/28 18:59:31 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	public:
		/* Constructors */
		Cat();
		Cat(const Cat &copy);

		/* Destructor */
		virtual ~Cat();

		/* Operator overload */
		Cat &operator=(const Cat &copy);
		
		/* Member functions */
		void makeSound(void) const;
		void setIdea(unsigned int i, std::string str);
		void getIdeas(void) const;

	private:
		Brain *_brain;
};