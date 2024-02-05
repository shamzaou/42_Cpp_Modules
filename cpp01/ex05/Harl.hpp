/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:48:40 by shamzaou          #+#    #+#             */
/*   Updated: 2024/01/30 19:54:09 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
private:
    void    debug( void );
    void    info( void );
    void    warning( void );
    void    error( void );

public:
    Harl(void);
    ~Harl(void);

    void    complain( std::string level );
};

#endif