#pragma once

#include <iostream>
#include <string>
#include <fstream> // open files for reading
/*
    fopen() , fread(), file(), std::ifstream  file input stream  fclose()
*/

class strReply {
    private:
        std::string fileName;
        std::string s1;
        std::string s2;
    public:
        strReply(const std::string &filename, const std::string& s1,const std::string &s2);
        ~strReply();
        bool validInput(void);
        bool processFile(void);
        std::string replaceCase(const std::string &text);

};