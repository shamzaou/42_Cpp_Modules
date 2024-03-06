/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:44:32 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/06 21:17:39 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main( void )
{

    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };

    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

    return 0;
}