/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 09:22:33 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/05 10:37:39 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    const Fixed _x;
    const Fixed _y;
    
public:
    Point(void);
    ~Point();
    
    Point(const float x, const float y);
    Point(const Point& origin);

    Point& operator=(const Point& other);

    Fixed   get_x( void ) const;
    Fixed   get_y( void ) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif