/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:39:03 by shamzaou          #+#    #+#             */
/*   Updated: 2024/01/30 19:43:12 by shamzaou         ###   ########.fr       */
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
    if (argc != 4 || std::string(argv[1]).empty() || std::string(argv[2]).empty() || std::string(argv[3]).empty())
    {
        std::cout << "Error: File or strings to be replaced cannot be empty" << std::endl;
        return (1);
    }
    
    // opening the file to be read
    std::ifstream inputFileStream(argv[1]);
    
    // creating the output file with the correct extension 
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
        inputFileStream.close();
        outputFileStream.close();
    }
    else
    {
        std::cout << "Unable to create or open files" << std::endl;
        return (1);
    }
    return (0);
}