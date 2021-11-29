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