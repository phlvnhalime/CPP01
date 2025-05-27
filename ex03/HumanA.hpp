#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"


class HumanA
{
    private:
        Weapon& weapon;
        std::string name; 
    public:
       void attack();
       //Constructor
       HumanA(std::string name, Weapon& weapon);

       //Desturctor
       ~HumanA();

    /*
        While HumanA takes the Weapon in its constructor, Human B does not.
    */
}