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

    while(position = replaces.find(s1,position) != std::string::npos)
    {
        replaces.erase(position,s1.length());
        replaces.insert(position,s2);
        position += s2.length();
    }
    return replaces;
}


bool strReply::processFile(void){
    // validate input
    if(!validInput())
        return false;
    std::ifstream fileIn(fileName);
    if(!fileIn.is_open())
    {
        std::cerr << "Error: Can't open file '" << fileName << "'" << std::endl;
        return false;
    }
    // Replaced content with replacecase TODO

    // create output file TODO

}

