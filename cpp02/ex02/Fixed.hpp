/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:03:45 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/05 07:49:50 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int                 _fixedPointNum;
    static const int    _numFractionalBits = 8;
    
public:
    // Constructors
    Fixed( void );
    Fixed( const int n );
    Fixed( const float n );
    
    // Copy constructor
    Fixed( const Fixed& other );
    
    // Copy assignement operator
    Fixed& operator=( const Fixed& other );

    // Destructor
    ~Fixed();
    
    // Member functions
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

    float   toFloat( void ) const;
    int     toInt( void ) const;
};

std::ostream& operator<<( std::ostream & COUT, Fixed const &number);

#endif