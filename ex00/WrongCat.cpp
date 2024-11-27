/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:06:13 by tafocked          #+#    #+#             */
/*   Updated: 2024/11/27 19:09:40 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "WrongCat created." << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy)
{
	_type = "WrongCat";
	std::cout << "Copy of WrongCat created." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	_type = copy._type;
	std::cout << "WrongCat assignment operator called." << std::endl;
	return (*this);
}
