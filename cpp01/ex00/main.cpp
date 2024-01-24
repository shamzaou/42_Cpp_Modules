/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:41:10 by shamzaou          #+#    #+#             */
/*   Updated: 2024/01/24 13:48:24 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
    std::cout << "Stack allocated:" << std::endl;
    Zombie zombie1("Karen");
    zombie1.announce();

    std::cout << "\nHeap allocated:" << std::endl;
    Zombie* zombie2 = newZombie("Steve");
    zombie2->announce();
    delete zombie2;

    std::cout << "\nRandom Chump:" << std::endl;
    randomChump("Bob");

    return 0;
}