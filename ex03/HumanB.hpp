#pragma once

#include "HumanA.hpp"
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon* weapon;
    public:
        HumanB(const std::string &name);
        ~HumanB();
        void attack() const;
        void setWeapon(Weapon &weapon);
};
