/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:34:05 by shamzaou          #+#    #+#             */
/*   Updated: 2024/01/25 14:56:30 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string name;

public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();

    void    announce( void );
    void    setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif