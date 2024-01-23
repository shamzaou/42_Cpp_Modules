/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 10:13:27 by shamzaou          #+#    #+#             */
/*   Updated: 2024/01/23 17:36:07 by shamzaou         ###   ########.fr       */
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

public:
    Contact();
    ~Contact();
    // setindex
    void set_index(int index);
    void set_nickname(std::string str);
    void set_fname(std::string str);
    void set_lname(std::string str);
    void set_secret(std::string str);
    void set_pnumber(std::string str);

    const std::string&  get_nickname(void) const;
    const std::string&  get_fname(void) const;
    const std::string&  get_lname(void) const;
    const std::string&  get_secret(void) const;
    const std::string&  get_pnumber(void) const;
};

#endif 