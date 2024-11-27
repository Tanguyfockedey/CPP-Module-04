/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:07:18 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/27 19:10:48 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		/* Constructors */
		WrongCat();
		WrongCat(const WrongCat &copy);

		/* Destructor */
		~WrongCat();

		/* Operator overload */
		WrongCat &operator=(const WrongCat &copy);
		
		/* Member functions */
};