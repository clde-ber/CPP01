#include "Zombie.hpp"

int main( void )
{
    Zombie* sZombie = Zombie::zombieHorde(10, "single zombie in the zombie horde");
    for (int i = 0; i < 10; i++)
        sZombie[i].announce();
    delete [] sZombie;
    return 0;
}