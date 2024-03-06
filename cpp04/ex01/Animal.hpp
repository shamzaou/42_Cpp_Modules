/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:46:46 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/06 17:32:50 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string _type;
public:
    Animal(void);
    Animal(std::string type);
    Animal(const Animal& src);
    Animal& operator=(const Animal& src);
    virtual ~Animal();

    virtual void    makeSound() const;
    std::string     getType() const;
};

#endif