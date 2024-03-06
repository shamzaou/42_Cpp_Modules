/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:44:32 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/06 18:44:07 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();  // Outputs the cat sound!
    j->makeSound();
    meta->makeSound();

    
    // Test with WrongAnimal and WrongCat
    const WrongAnimal *wrongMeta = new WrongAnimal();
    const WrongAnimal *wrongJ = new WrongCat();  // Should still work polymorphically
    std::cout << wrongJ->getType() << " " << std::endl;  // This won't work for WrongAnimal as it doesn't have getType()
    wrongJ->makeSound();
    wrongMeta->makeSound();
    
    delete meta;
    delete j;
    delete i;
    delete wrongMeta;
    delete wrongJ;

    return 0;
}
