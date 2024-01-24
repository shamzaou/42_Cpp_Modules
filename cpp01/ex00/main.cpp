/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:41:10 by shamzaou          #+#    #+#             */
/*   Updated: 2024/01/24 11:52:12 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
    Zombie zombie1("Karen");
    zombie1.announce();

    Zombie* zombie2 = newZombie("Steve");
    zombie2->announce();
    delete zombie2;

    randomChump("Bob");

    return 0;
}