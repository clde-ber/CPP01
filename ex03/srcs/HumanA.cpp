#include "HumanA.hpp"

HumanA::HumanA( std::string Name, Weapon& Weapon ) : _name(Name), _Weapon(Weapon)
{
    std::cout << "HumanA -- Constructor called" << std::endl;
    return ;
}

HumanA::~HumanA()
{
    std::cout << "HumanA -- Destructor called" << std::endl;
    return ;
}

void    HumanA::attack( void )
{
    std::cout << _name << " attacks with his " << _Weapon.getType() << std::endl;
}