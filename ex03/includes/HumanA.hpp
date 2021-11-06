/*Now, create two classes, HumanA and HumanB, that both have a Weapon, a name, and
an attack() function that displays:
NAME attacks with his WEAPON_TYPE
HumanA and HumanB are almost-almost the same; there are only two tiny-little-minuscule
details:
• While HumanA takes the Weapon in its constructor, HumanB doesn’t.
• HumanB may not always have a Weapon, but HumanA will ALWAYS be armed.*/

#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon& _Weapon;

    public:
        HumanA( std::string Name, Weapon& Weapon );
        HumanA( std::string Weapon );
        ~HumanA( void );
        void    attack( void );
};
/*
HumanA::HumanA( void ) : _Weapon(this->_Weapon)
{
    std::cout << "HUmanA -- constructor by default called" << std::endl;
    return ;
}*/

#endif