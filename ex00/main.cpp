#include "Zombie.hpp"

using namespace std;


int main(void)
{
    cout << "Once upon a time, zombies took over the world!" << endl;

    randomChump("Stack Zombie");

    Zombie* heapZombie = newZombie("Heap Zombie");
    heapZombie->announce();

    delete heapZombie;

    return 0;
}