/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:41:10 by shamzaou          #+#    #+#             */
/*   Updated: 2024/01/25 15:00:45 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
    int N = 5;
    Zombie* zombieArray = zombieHorde(N, "HordeMember");

    for (int i = 0; i < N; i++)
    {
        zombieArray[i].announce();
    }

    delete[] zombieArray;

    return 0;
}