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

