/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:04:16 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/06 14:45:29 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default ClapTrap"), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default ClapTrap " << " is born." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " is born." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
    *this = src;
    std::cout << "ClapTrap " << _name << " is cloned." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
    _name = src._name;
    _hitpoints = src._hitpoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (_energyPoints > 0)
        _energyPoints -= 1;
    else
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitpoints > 0)
        _hitpoints -= amount;
    else
    {
        std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " took damage of " << amount << " points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitpoints < 100)
        _hitpoints += amount;
    else
    {
        std::cout << "ClapTrap " << _name << " is already at full health!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " is repaired by " << amount << " points!" << std::endl;
}

int ClapTrap::getAttackDamage() const
{
    return _attackDamage;
}