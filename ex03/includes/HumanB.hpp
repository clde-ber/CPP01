/*Now, create two classes, HumanA and HumanB, that both have a Weapon, a name, and
an attack() function that displays:
NAME attacks with his WEAPON_TYPE
HumanA and HumanB are almost-almost the same; there are only two tiny-little-minuscule
details:
• While HumanA takes the Weapon in its constructor, HumanB doesn’t.
• HumanB may not always have a Weapon, but HumanA will ALWAYS be armed.*/

#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon* _Weapon;

    public:
        HumanB( std::string name );
        ~HumanB( void );
        void    setWeapon(Weapon& Weapon);
        void    attack( void );
};

#endif