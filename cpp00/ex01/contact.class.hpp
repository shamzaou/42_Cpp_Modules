/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 10:13:27 by shamzaou          #+#    #+#             */
/*   Updated: 2024/01/21 21:03:45 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>

class Contact
{
private:
    int         index;    
    std::string  nickname;
    std::string  first_name;
    std::string  last_name;
    std::string  darkest_secret;
    std::string  phone_number;

    void    get_input(std::string str); 
    void    init_contact(void);

public:
    Contact();
    ~Contact();
    
    // display contact
    void    print_contact
    // dsplay contacts
    // print data
    void print_data
    // set data
};

#endif 