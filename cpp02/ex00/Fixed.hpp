/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:03:45 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/05 04:11:33 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int                 _fixedPointNum;
    static const int    _numFractionalBits = 8;
    
public:
    // Default constructor
    Fixed(); 
    
    // Copy constructor
    Fixed(const Fixed& other);
    
    // Copy assignement operator
    Fixed& operator=(const Fixed& other);

    // Destructor
    ~Fixed();
    
    // Member functions
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
};

#endif