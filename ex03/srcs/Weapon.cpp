#include "Weapon.hpp"


Weapon::Weapon( std::string name ) : _type(name)
{
    std::cout << "Weapon -- Constructor called" << std::endl;
    return ;
}

Weapon::~Weapon()
{
    std::cout << "Weapon -- Destructor called" << std::endl;
    return ;
}

const std::string Weapon::getType( void ) const
{
    return _type;
}

void Weapon::setType( std::string type )
{
    _type = type;
}