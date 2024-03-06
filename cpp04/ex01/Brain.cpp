/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:43:45 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/06 20:46:37 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
    std::cout << "Brain constructed" << std::endl;
}

Brain::~Brain( void )
{
    std::cout << "Brain destroyed" << std::endl;
}

Brain::Brain(const Brain& src)
{
    std::cout << "Brain copy-constructed" << std::endl;
    *this = src;
}

Brain& Brain::operator=(const Brain& src)
{
    std::cout << "Brain assigned" << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = src._ideas[i];
    return *this;
}
