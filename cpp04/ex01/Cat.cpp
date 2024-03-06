/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:40:04 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/06 21:07:52 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
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

Cat::~Cat()
{
    std::cout << this->_type << " destructor called" << std::endl;
    delete this->_brain;
}

Cat::Cat(const Cat& sample)
{
    *this = sample;
    std::cout << this->_type << " copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& sample)
{
    if (this != &sample)
    {
        this->_type = sample._type;
        this->_brain = new Brain(*sample._brain);
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow!" << std::endl;
}
