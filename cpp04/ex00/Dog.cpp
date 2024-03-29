/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:02:31 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/06 17:39:56 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << this->_type << " destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof!" << std::endl;
}
