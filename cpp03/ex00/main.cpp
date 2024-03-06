/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:31:52 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/06 13:39:14 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Claptrap");
    ClapTrap clap2(clap);

    clap.attack("Mario");
    clap.takeDamage(2);
    clap.beRepaired(2);
    return 0;
}