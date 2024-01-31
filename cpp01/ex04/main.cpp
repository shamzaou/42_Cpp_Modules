/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:39:03 by shamzaou          #+#    #+#             */
/*   Updated: 2024/01/31 21:01:33 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

bool    is_valid_file( const std::string& filePath)
{
    std::ofstream testFileStream(filePath.c_str(), std::ios::out | std::ios::app);
    if (testFileStream.is_open())
    {
        testFileStream.close();
        return (true);
    }
    return (false);
}

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
    std::string filePath = argv[1];
    if (!is_valid_file(filePath))
        return (1);
    std::ifstream inputFileStream(filePath);
    
    // creating the output file with the correct extension 
    std::string outputFileName = filePath + ".replace";
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