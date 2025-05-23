#include "Zombie.hpp"

using namespace std;


Zombie* newZombie( std::string name ){
    return new Zombie(name);
}

