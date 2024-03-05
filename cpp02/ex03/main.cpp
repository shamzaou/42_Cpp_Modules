/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:03:42 by shamzaou          #+#    #+#             */
/*   Updated: 2024/03/05 17:55:49 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main() {
    Point a(1.0f, 1.0f);
    Point b(2.0f, 4.0f);
    Point c(3.0f, 1.0f);

    Point p(2.0f, 2.0f);  // Inside the triangle
    std::cout << "Point p is inside the triangle: " << (bsp(a, b, c, p) ? "Yes" : "No") << std::endl;

    Point q(4.0f, 4.0f);  // Outside the triangle
    std::cout << "Point q is inside the triangle: " << (bsp(a, b, c, q) ? "Yes" : "No") << std::endl;

    Point r(3.0f, 1.0f);  // On the edge of the triangle
    std::cout << "Point r is inside the triangle: " << (bsp(a, b, c, r) ? "Yes" : "No") << std::endl;

    Point s(2.0f, 0.5f);  // Outside the triangle
    std::cout << "Point s is inside the triangle: " << (bsp(a, b, c, s) ? "Yes" : "No") << std::endl;

    return 0;
}