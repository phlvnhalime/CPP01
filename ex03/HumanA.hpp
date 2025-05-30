#pragma once

#include "Weapon.hpp"


class HumanA
{
    private:
        std::string name;
        Weapon &weapon;
    public:
        HumanA(const std::string &name, Weapon &ammo);
        ~HumanA();
        void attack() const;
};