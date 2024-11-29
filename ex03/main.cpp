/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:15:09 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/29 16:50:02 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"

int main(void)
{
	AMateria *ice = new Ice();
	// ICharacter *Alice = new Character();

	std::cout << ice->getType() << std::endl;
	// ice->use(*Alice);
	// delete ice;
}
