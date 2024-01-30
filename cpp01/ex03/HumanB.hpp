/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:17:36 by shamzaou          #+#    #+#             */
/*   Updated: 2024/01/30 16:49:12 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon      *weapon;

public:
    HumanB(std::string name);
    ~HumanB(void);

    void    attack(void);
    void    setWeapon(Weapon &weapon);
};