#include "Zombie.hpp"

using namespace std;

void randomChump( std::string name ){
    Zombie zombie(name);
    zombie.announce();
}