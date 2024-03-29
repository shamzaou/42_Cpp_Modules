/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 09:23:26 by shamzaou          #+#    #+#             */
/*   Updated: 2024/01/23 18:37:32 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

void print_usage(void)
{
    std::cout << GREEN << "Welcome to the 80s with this awesome phonebook." << RESET;
    std::cout << std::endl;
    std::cout << "For usage you can use the following commands:" << std::endl;
    std::cout << BLUE << "==> ADD:" << RESET << " to save a new contact." << std::endl;
    std::cout << BLUE << "==> SEARCH:" << RESET <<  " to display a specific contact" << std::endl;
    std::cout << BLUE << "==> EXIT:" << RESET << " to exit the program and say goodbye to your";
    std::cout << " contacts because they will be lost." << std::endl;   
}

int main(void)
{
    PhoneBook book;
    std::string input = "";
    
    print_usage();
    while (true)
    {
        std::cout << "> " << std::flush;
        if (!std::getline(std::cin, input))
            break;
        if (input.compare("EXIT") == 0)
            break;
        else if (input.compare("ADD") == 0)
            book.addContact();
        else if (input.compare("SEARCH") == 0)
        {
            book.printContacts();
            book.search();
        }
    }
    return 0;
}