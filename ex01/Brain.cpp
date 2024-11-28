/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:21:31 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/28 16:37:18 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created." << std::endl;
}

Brain::Brain(const Brain &copy)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = copy.ideas[i];
	std::cout << "Copy of Brain created." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}

Brain &Brain::operator=(const Brain &copy)
{
	std::cout << "Brain assignment operator called." << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = copy.ideas[i];
	}
	return (*this);
}
