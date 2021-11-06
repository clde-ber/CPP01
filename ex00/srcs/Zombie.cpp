#include "Zombie.hpp"

Zombie::Zombie( void )
{
    std::cout << "constructor called" << std::endl;
    return ;
}

Zombie::Zombie( std::string name ) : _name(name)
{
    std::cout << "constructor called" << std::endl;
    return ;
}

Zombie::~Zombie( void )
{
    std::cout << "destructor called :" << this->_name << " destroyed" << std::endl;
    return ;
}

void    Zombie::announce( void )
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
