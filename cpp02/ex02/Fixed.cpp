/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:03:48 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/05 07:49:44 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPointNum = 0;
}

Fixed::Fixed( const int n) : _fixedPointNum( n << _numFractionalBits )
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float n ) : _fixedPointNum( roundf(n * (1 << _numFractionalBits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(other.getRawBits());
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &other)
        this->_fixedPointNum = other.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointNum;
}

void Fixed::setRawBits( int const raw)
{
    this->_fixedPointNum = raw;
}

float   Fixed::toFloat( void ) const
{
    return (static_cast<float>(this->getRawBits()) / (1 << _numFractionalBits));
}

int     Fixed::toInt( void ) const
{
    return this->_fixedPointNum >> _numFractionalBits;
}

std::ostream& operator<<( std::ostream& COUT, Fixed const &number)
{
    COUT << number.toFloat();
    return COUT;
}