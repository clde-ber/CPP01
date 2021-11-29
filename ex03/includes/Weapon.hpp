//Make a Weapon class, that has a type string, and a getType method that returns a
//const reference to this string. It also has a setType, of course!

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
    private :
        std::string _type;

    public :
        Weapon(std::string name);
        ~Weapon( void );
        const std::string& getType( void ) const;
        void setType( std::string type );
};
/*
Weapon::Weapon( void )
{
    std::cout << "Weapon -- constructor by default called" << std::endl;
    return ;
}*/

#endif