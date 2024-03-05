/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:38:29 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/05 17:48:53 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed abs(Fixed p)
{
    if (p < 0)
        return (p * (-1));
    return (p);
}

static Fixed area(Point const a, Point const b, Point const c) {
        Fixed area (((a.get_x() * (b.get_y() - c.get_y())) +
             (b.get_x() * (c.get_y() - a.get_y())) +
             (c.get_x() * (a.get_y() - b.get_y()))) / 2);
             return (abs(area));
}

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
    Fixed abcArea = area(a, b, c);
    Fixed pabArea = area(p, a, b);
    Fixed pbcArea = area(p, b, c);
    Fixed pcaArea = area(p, c, a);

    if (pabArea == 0 || pbcArea == 0 || pcaArea == 0)
        return false;
    
    return (abcArea >= pabArea + pbcArea + pcaArea);
}