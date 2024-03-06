/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:41:59 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/06 14:39:59 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hitpoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "<ScavTrap> " << this->_name << " is born." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "<ScavTrap> " << this->_name << " is destroyed." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_energyPoints <= 0)
    {
        std::cout << "<ScavTrap> " << this->_name << " is out of energy!" << std::endl;
        return;
    }
    this->_energyPoints -= 1;
    std::cout << "<ScavTrap> " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "<ScavTrap> " << this->_name << " has entered the Gate keeper mode." << std::endl;
}