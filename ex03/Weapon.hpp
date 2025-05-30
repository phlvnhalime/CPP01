#pragma once

#include <iostream>
#include <string>


class Weapon{
    private:
        std::string type;
    public:
        Weapon(const std::string &weapon);
        ~Weapon();
        const std::string &getType() const;
        void setType(const std::string &newType);
};
