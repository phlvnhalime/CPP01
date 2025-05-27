#include "Zombie.hpp"


Zombie::Zombie(void)
{
    this->strName = "";
}

Zombie::Zombie(string strName){
    this->strName = strName;
}


Zombie::~Zombie(void)
{
    cout << this->strName << "Destroyed it!" << endl;
}


void Zombie::announce( void ){
    cout << this->strName << ": BraiiiiiiinnnzzzZ..." << endl;
}