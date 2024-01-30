/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:17:43 by shamzaou          #+#    #+#             */
/*   Updated: 2024/01/30 16:36:42 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
private:
    std::string     name;
    Weapon          &weapon;

public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA(void);

    void    attack(void);
    void    setWeapon(Weapon weapon);
};