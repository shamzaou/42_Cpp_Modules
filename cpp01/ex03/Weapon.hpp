/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:19:20 by shamzaou          #+#    #+#             */
/*   Updated: 2024/01/27 13:50:51 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string type;

public:
    Weapon();
    ~Weapon();

    const   std::string& getType() const;
    void    setType(std::string new_type);
};

Weapon::Weapon(/* args */)
{
}

Weapon::~Weapon()
{
}


#endif