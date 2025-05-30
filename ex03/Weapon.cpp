#include "Weapon.hpp"

/*Constructor*/
Weapon::Weapon(const std::string &type) : type(type) {

}

/*
    I can make it also
    Weapon::Weapon(const std::string &type) 
    {
        this->type = type;
    }
*/
/*Destructor*/
Weapon::~Weapon(){

}

const std::string &Weapon::getType() const {
    return this->type;
}

void Weapon::setType(const std::string &newType){
    this->type = newType;
}
