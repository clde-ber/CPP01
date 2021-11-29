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

const std::string& Weapon::getType( void ) const
{
    const std::string& name = this->_type;
    return name;
}

void Weapon::setType( std::string type )
{
    this->_type = type;
}