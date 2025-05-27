#include "Zombie.hpp"


int main(void)
{
    std::cout << "Once upon a time, zombies took over the world!" << std::endl;

    randomChump("Stack Zombie");

    Zombie* heapZombie = newZombie("Heap Zombie");
    heapZombie->announce();

    delete heapZombie;

    return 0;
}