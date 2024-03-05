/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:03:45 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/05 08:24:25 by shamzaou         ###   ########.fr       */
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

    // Comparison operators
    bool   operator>( const Fixed& other ) const;
    bool   operator<( const Fixed& other ) const;
    bool   operator>=( const Fixed& other ) const;
    bool   operator<=( const Fixed& other ) const;
    bool   operator==( const Fixed& other ) const;
    bool   operator!=( const Fixed& other ) const;

    // Arithmetic operatos
    Fixed   operator+( const Fixed& other ) const;
    Fixed   operator-( const Fixed& other ) const;
    Fixed   operator*( const Fixed& other ) const;
    Fixed   operator/( const Fixed& other ) const;

    // Increment operators
    Fixed&  operator++( void ); // prefix
    Fixed   operator++( int ); // postfix
    Fixed&  operator--( void ); // prefix
    Fixed   operator--( int ); // postfix

    // Overloaded member functions
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
    
};

std::ostream& operator<<( std::ostream & COUT, Fixed const &number);

#endif