/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 10:45:34 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/03 04:33:14 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact() {};
Contact::~Contact() {};

void Contact::set_nickname(std::string str)
{
    this->nickname = str;
}

void Contact::set_fname(std::string str)
{
    this->first_name = str;
}
void Contact::set_lname(std::string str)
{
    this->last_name = str;
}
void Contact::set_secret(std::string str)
{
    this->darkest_secret = str;
}
void Contact::set_pnumber(std::string str)
{
    this->phone_number = str;
}

void Contact::set_index(int index)
{
    this->index = index;
}

const std::string&  Contact::get_nickname(void) const
{
    return (this->nickname);
}

const std::string&  Contact::get_fname(void) const
{
    return (this->first_name);
}

const std::string&  Contact::get_lname(void) const
{
    return (this->last_name);
}

const std::string&  Contact::get_secret(void) const
{
    return (this->phone_number);
}

const std::string&  Contact::get_pnumber(void) const
{
    return (this->phone_number);
}