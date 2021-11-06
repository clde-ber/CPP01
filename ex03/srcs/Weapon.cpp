#include "Weapon.hpp"


Weapon::Weapon( std::string name ) : _wName(name)
{
    std::cout << "Weapon -- Constructor called" << std::endl;
    return ;
}

Weapon::~Weapon()
{
    std::cout << "Weapon -- Destructor called" << std::endl;
    return ;
}

const std::string& Weapon::getType( void ) const
{
    const std::string& name = this->_wName;
    return name;
}

void Weapon::setType( std::string type )
{
    this->_wName = type;
}