/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:31:52 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/06 15:24:07 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap    clap("CL4P-TP");
    FragTrap    frag("FR4G-TP");

    clap.attack("FR4G-TP");
    frag.beRepaired(10);
    frag.highfive();
    return 0;

}