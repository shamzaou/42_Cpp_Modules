/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:49:30 by shamzaou          #+#    #+#             */
/*   Updated: 2024/01/23 18:44:23 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "phonebook.class.hpp"

PhoneBook::PhoneBook() : count(0) {};
PhoneBook::~PhoneBook() {};

bool isValidNumber(const std::string& input) {
    for (std::string::const_iterator it = input.begin(); it != input.end(); ++it) {
        char c = *it;
        if (!std::isdigit(static_cast<unsigned char>(c)))
            return false;
    }
    return true;
}

std::string ft_format(const std::string& str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return str;
}

void PhoneBook::printContact(Contact contact)
{
    std::cout << std::endl;
    std::cout << "First name: " << contact.get_fname() << std::endl;
    std::cout << "Last name: " << contact.get_lname() << std::endl;
    std::cout << "Nickname: " << contact.get_nickname() << std::endl;
    std::cout << "Phone number: " << contact.get_pnumber() << std::endl;
    std::cout << "Darkest secret: " << contact.get_secret() << std::endl;
    std::cout << std::endl;
}

void PhoneBook::addContact(void)
{
    Contact     new_contact;
    std::string input;

    std::cout << "First name: ";
    std::getline(std::cin, input);
    new_contact.set_fname(input);

    std::cout << "Last name: ";
    std::getline(std::cin, input);
    new_contact.set_lname(input);

    std::cout << "Nickname: ";
    std::getline(std::cin, input);
    new_contact.set_nickname(input);

    while (true)
    {
        std::cout << "Phone number: ";
        std::getline(std::cin, input);
        if (!isValidNumber(input))
        {
            std::cin.clear();
            std::cout << "Invalid input for phone number. Please retry!";
            continue;
        }
        new_contact.set_pnumber(input);
        break;
    }
    
    std::cout << "Darkest secret: ";
    std::getline(std::cin, input);
    new_contact.set_secret(input);

    if (count < 8)
    {
        count++;
        this->contacts[count - 1] = new_contact;
    }
    else
    {
        count = 1;
        this->contacts[count - 1] = new_contact;
    }
    
    std::cout << "Contact added successfully" << std::endl;
}

void PhoneBook::printContacts(void)
{
    if (count == 0)
    {
        std::cout << "There are no contacts to display!" << std::endl;
        return;
    }
    
    std::cout << "\n|     Index|First Name| Last Name|  Nickname|" << std::endl;
    for (int i = 0; i < this->count; i++)
    {
        std::cout << "|" << std::right << std::setw(10) << i << "|";
        std::cout << std::right << std::setw(10) << ft_format(contacts[i].get_fname()) << "|";
        std::cout << std::right << std::setw(10) << ft_format(contacts[i].get_lname()) << "|";
        std::cout << std::right << std::setw(10) << ft_format(contacts[i].get_nickname()) << "|";
        std::cout << std::endl;
    }
}

void PhoneBook::search(void)
{   
    std::string index;
    int int_index;
    
    while (true)
    {
        std::cout << "Insert index of wanted contact: ";
        std::getline(std::cin, index);
        if (isValidNumber(index))
        {
            int_index = std::atoi(index.c_str());
            if (int_index <= 8)
                break;
        }
        std::cin.clear();
        std::cout << "Invalid input!" << std::endl; 
    }
    if (int_index > (count - 1))
        std::cout << "There's no contact with this index!" << std::endl;
    else
        printContact(this->contacts[int_index]);
}