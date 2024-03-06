/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:02:31 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/06 20:59:29 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << this->_type << " constructor called" << std::endl;
    try
    {
        this->_brain = new Brain();
    }
    catch(const std::bad_alloc& e)
    {
        std::cout << "Fail at Memory Allocation : " << e.what() << std::endl;
    }
    
}

Dog::~Dog()
{
    std::cout << this->_type << " destructor called" << std::endl;
    delete this->_brain;
}

Dog::Dog(const Dog& src)
{
    *this = src;
    std::cout << this->_type << " copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& src)
{
    if ( this != &src)
    {
        this->_type = src._type;
        this->_brain = new Brain(*src._brain);
    
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof!" << std::endl;
}
