#include "Zombie.hpp"

int main( void )
{
    Zombie *hehehe = zombieHorde(10, "hehehe");
    for (int i = 0; i < 10; i++)
        hehehe[i].announce();
    delete [] hehehe;
    return 0;
}