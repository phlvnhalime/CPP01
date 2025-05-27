#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    
    Zombie *zombieHorde;
    int i;

    zombieHorde = new Zombie[N];
    for (i = 0; i < N; i++){
        zombieHorde[i] = Zombie(name);
    }

    return (zombieHorde);
}