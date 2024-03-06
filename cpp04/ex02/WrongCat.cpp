/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:40:30 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/06 18:48:14 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << _type << " constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << _type << " destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Meow Meow!" << std::endl;
}