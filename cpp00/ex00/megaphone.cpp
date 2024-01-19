/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:01:03 by shamzaou          #+#    #+#             */
/*   Updated: 2024/01/19 11:41:13 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i = 1;
    std::string temp;
    
    if (ac != 1)
    {
        while (i < ac)
        {
            temp = av[i];
            for (std::string::size_type j = 0; j < temp.size(); j++)
            {
                temp[j] = toupper(temp[j]);
            }
            std::cout << temp;
            i++;
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

    std::cout << std::endl;
    
    return 0;
}