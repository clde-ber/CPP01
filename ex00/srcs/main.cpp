#include "Zombie.hpp"

int main( void )
{
    Zombie *firstOne = newZombie("firstOne");
    
    delete(firstOne);
    randomChump("secondOne");
    return 0;
}