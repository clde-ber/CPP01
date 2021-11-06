#ifndef KAREN_H
#define KAREN_H

#include <iostream>
#include <string>

class Karen
{
    private:
        std::string _level[4];
        void (Karen::*_funct[4])();
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        Karen( void );
        ~Karen();
        void complain( std::string level );
};

#endif