/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:30:27 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/06 18:51:27 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << _type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : _type(name)
{
    std::cout << "WrongAnimal constructor called for <" << _type << ">."  << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
    *this = src;
    std::cout << _type << " copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
    _type = src._type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << _type << " destructor called" << std::endl;
}

void    WrongAnimal::makeSound() const
{
    std::cout << _type << " sound" << std::endl;
}

std::string     WrongAnimal::getType() const
{
    return _type;
}