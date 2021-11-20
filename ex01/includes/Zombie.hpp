#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class   Zombie
{
    private :
        std::string _name;
        
    public :
        Zombie( void );
        Zombie( std::string name );
        ~Zombie( void );
        void setName( std::string name );
        void    announce( void );
        static Zombie* zombieHorde( int N, std::string name );
};

#endif