/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:49:39 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/06 15:19:11 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hitpoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;

    std::cout << "<FragTrap> " << this->_name << " is ready to fight!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "<FragTrap> " << this->_name << " has perished" << std::endl;
}

void    FragTrap::highfive( void )
{
    std::cout << "<FragTrap> " << this->_name << " highfives!" << std::endl;
}

