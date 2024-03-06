/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:41:56 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/06 14:36:51 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>


class ScavTrap : public ClapTrap
{
private:
    ScavTrap();
    
public:
    ScavTrap(std::string name);
    ~ScavTrap();

    void attack(const std::string& target);
    void guardGate();
};

#endif