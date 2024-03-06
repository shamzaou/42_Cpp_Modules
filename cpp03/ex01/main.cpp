/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:31:52 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/06 14:44:52 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap("Clap");
    ScavTrap scav("Scav");

    clap.attack("Scav");
    scav.takeDamage(clap.getAttackDamage());
    scav.guardGate();
    return 0;
}