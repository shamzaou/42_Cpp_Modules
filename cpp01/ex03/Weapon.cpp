/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:17:45 by shamzaou          #+#    #+#             */
/*   Updated: 2024/01/30 16:52:36 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type) {}

Weapon::~Weapon(void) {}

const std::string& Weapon::getType(void)
{
    return (this->type);
}
void    Weapon::setType(std::string new_type)
{
    this->type = new_type;
}
