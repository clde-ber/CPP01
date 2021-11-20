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
    this->_Weapon = &Weapon;
}

void    HumanB::attack( void )
{
    std::cout << this->_name << " attacks with his " << this->_Weapon->getType() << std::endl;
}