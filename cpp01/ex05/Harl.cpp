/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:54:11 by shamzaou          #+#    #+#             */
/*   Updated: 2024/02/05 16:51:38 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void    Harl::debug( void )
{
    std::cout << "I love having extra bacon for my "
        "7XL-double-cheese-triple-pickle-special-ketchup burger. "
        "I really do!" << std::endl;
}

void    Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. "
        "You didn't put enough bacon in my burger! If you did, I wouldn't "
        "be asking for more!" << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. "
        "I've been coming for years whereas you started working here since "
        "last month." << std::endl;
}

void    Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the "
        "manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    typedef void (Harl::*MemberFunction)();
    
    std::map<std::string, MemberFunction> table;
    table["DEBUG"] = &Harl::debug;
    table["INFO"] = &Harl::info;
    table["WARNING"] = &Harl::warning;
    table["ERROR"] = &Harl::error;
    
    MemberFunction func = table[level];
    if (func)
        (this->*func)();
}