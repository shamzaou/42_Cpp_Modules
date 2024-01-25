/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:07:46 by shamzaou          #+#    #+#             */
/*   Updated: 2024/01/25 14:58:09 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* horde = new Zombie[N];
    
    for(int i = 0; i < N; i++)
    {
        horde[i].setName(name);
    }
    return horde;
}