#ifndef KAREN_H
#define KAREN_H

#include <iostream>
#include <string>

class Karen
{
    private:
        std::string _debug;
        std::string _info;
        std::string _warning;
        std::string _error;
        Karen* _ptr;
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