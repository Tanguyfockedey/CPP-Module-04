/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:35:16 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/29 17:14:10 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{}

ICharacter::ICharacter(const ICharacter &copy)
{
	(void)copy;
}

ICharacter::~ICharacter()
{}

ICharacter &ICharacter::operator=(const ICharacter &copy)
{
	(void) copy;
	return (*this);
}
