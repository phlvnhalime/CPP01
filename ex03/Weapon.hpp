#pragma once

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string type;
    public:
        std::string getType(std::string type) const{
            return type;
        }
        std::string setType(std::string newType) {
            type = newType;
            return type;
        }
}