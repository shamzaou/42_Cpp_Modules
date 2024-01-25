/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:01:39 by shamzaou          #+#    #+#             */
/*   Updated: 2024/01/25 16:14:16 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string mystring = "HI THIS IS BRAIN";

    std::string *stringPTR = &mystring;

    std::string &stringREF = mystring;


    std::cout << "Memory address of mystring: " << &mystring << std::endl;

    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;

    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;


    std::cout << "The value of the string variable: " << mystring << std::endl;

    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;

    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;

    
}