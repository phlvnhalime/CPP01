/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpehliva <hpehliva@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 12:19:54 by hpehliva          #+#    #+#             */
/*   Updated: 2025/06/11 12:50:22 by hpehliva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

strReply::strReply(const std::string &filename, const std::string& s1,const std::string &s2){
    this->fileName = filename;
    this->s1 = s1;
    this->s2 = s2;
}

strReply::~strReply(){};

bool strReply::validInput(void){
    if(fileName.empty())
    {
        std::cerr << "Error: Filename can not be empty" << std::endl;
        return false;
    }
    if(s1.empty())
    {
        std::cerr << "Error:: String to replace(s1) can not be empty" << std::endl;
        return false;
    }
    return true;
}

std::string strReply::replaceCase(const std::string &text)
{
    std::string replaces = text;
    size_t position = 0;

    while((position = replaces.find(s1,position)) != std::string::npos)
    {
        replaces.erase(position,s1.length());
        replaces.insert(position,s2);
        position += s2.length();
    }
    return replaces;
}


bool strReply::processFile(void){
    
    std::string content;
    // validate input
    if(!validInput())
        return false;
    std::ifstream fileIn(fileName);
    if(!fileIn.is_open())
    {
        std::cerr << "Error: Can't open file '" << fileName << "'" << std::endl;
        return false;
    }

    // Read the line
    std::string line;
    while(std::getline(fileIn, line))
    {
        content += line;
        if(!fileIn.eof())
        {
            content += '\n';
        }
    }
    fileIn.close();
    // Replaced content with replacecase TODO
    std::string replacedContent = replaceCase(content);

    std::string outputFileName = fileName + ".replace";

    //write to output file

    std::ofstream outputFile(outputFileName);
    if(!outputFile.is_open())
    {
        std::cerr << "Error: Output file can not created '" << outputFileName << "'" << std::endl;
        return false;
    }

    outputFile << replacedContent;
    outputFile.close();

    std::cout << "Successfully! Output written to: " << outputFileName << std::endl;
    
    return true;
}

