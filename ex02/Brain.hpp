/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:21:17 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/28 18:59:14 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Brain
{
	public:
		/* Constructors */
		Brain();
		Brain(const Brain &copy);

		/* Destructor */
		~Brain();

		/* Operator overload */
		Brain &operator=(const Brain &src);

	
		std::string ideas[100];
};