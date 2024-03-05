/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 09:22:29 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/05 10:56:01 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0)
{
    //std::cout << "Point created" << std::endl;
}

Point::~Point()
{
    //std::cout << "Destructor called" << std::endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
    //std::cout << "Point created" << std::endl;
}

Point::Point(const Point& origin) : _x(origin._x), _y(origin._y)
{
    //std::cout << "Point created" << std::endl;
}

Point& Point::operator=(const Point& other)
{
    if (this != &other)
    {
        ( Fixed )this->_x = other._x;
        ( Fixed )this->_y = other._y;
    }
    return (*this);
}

Fixed Point::get_x(void) const
{
    return (this->_x);    
}

Fixed Point::get_y(void) const
{
    return (this->_y);    
}