#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string &name): name(name), weapon(NULL){

}


HumanB::~HumanB(){}


void HumanB::attack() const{

    if(this->weapon)
    {
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    }
    else
    {
        std::cout << this->name << " has no weapon to attack with!"  << std::endl;
    }
}

void HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
}