#include "Zombie.hpp"



int main(void)
{
    Zombie *heapZombie;

    std::cout << "Once upon a time, zombies took over the world!" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    heapZombie = newZombie("Heap");
    if(heapZombie)
    {
        heapZombie->announce();
        delete heapZombie;
    }
    else
    {
        std::cout << "Could not create zombie, out of memory!" << std::endl;
    }

    randomChump("Stack");


    return (0);
}