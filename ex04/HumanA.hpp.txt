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

#endif