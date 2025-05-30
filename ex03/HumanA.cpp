#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &ammo): name(name), weapon(ammo){
}


void HumanA::attack() const{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA(){}