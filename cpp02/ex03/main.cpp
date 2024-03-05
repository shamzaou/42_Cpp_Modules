/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:03:42 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/05 13:33:19 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main() {
    Point a(1, 4);
    Point b(3, 1);
    Point c(1, 1);

    Point p(2, 2);  // Inside the triangle
    std::cout << "Point p is inside the triangle: " << (bsp(a, b, c, p) ? "Yes" : "No") << std::endl;

    Point q(1, 1);  // Outside the triangle
    std::cout << "Point q is inside the triangle: " << (bsp(a, b, c, q) ? "Yes" : "No") << std::endl;

    return 0;
}