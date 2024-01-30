/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:39:03 by shamzaou          #+#    #+#             */
/*   Updated: 2024/01/30 19:33:22 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>


std::string replace(std::string line, const std::string& s1, const std::string& s2)
{
    std::size_t pos = 0;
    while ((pos = line.find(s1, pos)) != std::string::npos) 
    {
        line.replace(pos, s1.length(), s2);
        pos += s2.length();
    }
    return line;
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return (1);
    
    // opening file to be read
    std::ifstream inputFileStream(argv[1]);
    
    // creating output file with the correct extension 
    std::string outputFileName = std::string(argv[1]) + ".replace";
    std::ofstream outputFileStream(outputFileName.c_str());
    
    // replacing and writing to the new file
    if (inputFileStream.is_open() && outputFileStream.is_open())
    {
        std::string line;
        while (std::getline(inputFileStream, line))
        {
            line = replace(line, argv[2], argv[3]);
            outputFileStream << line << std::endl;
        } 
        // close files
    }
    else
        std::cout << "Unable to create or open files" << std::endl;

    return (0);
}