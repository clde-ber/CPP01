#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name), _Weapon(0)
{
    std::cout << "HumanB -- constructor by default called" << std::endl;
    return ;
}

HumanB::~HumanB()
{
    std::cout << "HumanB -- Destructor called" << std::endl;
    return ;
}


void    HumanB::setWeapon(Weapon& Weapon)
{
    _Weapon = &Weapon;
}

void    HumanB::attack( void )
{
    if (_Weapon)
        std::cout << _name << " attacks with his " << _Weapon->getType() << std::endl;
    else
        std::cout << _name << " has no weapon" << std::endl;
}