#include "Zombie.hpp"

int main(void)
{
    Zombie *hordeOfZombies;
    int N = 5;
    int i;

    std::cout << "Once upon a time, zombies took over the world!" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    hordeOfZombies = zombieHorde(N, "Horde");
    for(i = 0; i < N ; i++)
    {
        std::cout << "Number of Zombie" << i << ": ";
        hordeOfZombies->announce();
    }
    delete[] hordeOfZombies;

    return (0);
}