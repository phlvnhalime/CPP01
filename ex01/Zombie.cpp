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
    std::cout << this->strName << " Destroyed it!" << std::endl;
}

void Zombie::announce( void ){
    std::cout << this->strName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
