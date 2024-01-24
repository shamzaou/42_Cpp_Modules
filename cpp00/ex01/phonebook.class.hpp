/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 10:09:40 by shamzaou          #+#    #+#             */
/*   Updated: 2024/01/23 18:38:45 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "contact.class.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    int     count;
    int     nextIndex;
    
public:
    PhoneBook();
    ~PhoneBook();
    
    void    printContact(Contact contact);
    void    printContacts(void);
    void    search(void);
    void    addContact(void);
};

#endif