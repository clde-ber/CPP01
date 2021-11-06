// After this, write a function that will create a Zombie, _name it, and return it to be
//used somewhere else in your code. The prototype of the function is:

#include "Zombie.hpp"

Zombie* newZombie( std::string _name )
{
    Zombie *newZombie = new Zombie(_name);

    return newZombie;
}