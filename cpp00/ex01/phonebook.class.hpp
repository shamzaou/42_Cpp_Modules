/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 10:09:40 by shamzaou          #+#    #+#             */
/*   Updated: 2024/01/21 21:07:17 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "contact.class.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    
public:
    PhoneBook();
    ~PhoneBook();
    void    printContact(int index);
    void    printContacts(void);
    void    search(void);
    void    addContact(void);
};

#endif