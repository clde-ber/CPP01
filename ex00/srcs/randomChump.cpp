#include "Zombie.hpp"

void randomChump( std::string _name )
{
    Zombie newzombie(_name);
    newzombie.announce();
}