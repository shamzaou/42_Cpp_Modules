/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:26:52 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/06 18:37:15 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Default Animal")
{
    std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(std::string name) : _type(name)
{
    std::cout << "Animal constructor called for <" << _type << ">." << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& src)
{
    *this = src;
    std::cout << _type << " copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& src)
{
    _type = src._type;
    return *this;
}

void    Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

std::string     Animal::getType() const
{
    return _type;
}