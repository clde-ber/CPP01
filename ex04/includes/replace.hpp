#ifndef REPLACE_H
#define REPLACE_H

#include <fstream>
#include <iostream>
#include <string>

class replace
{
    private:
        std::string _s1;
        std::string _s2;
        char    _c;
        std::string _buf;
        std::string _name;
    public:
        void writeContentToFile(std::string stringZero, std::string argOne, std::string argTwo, std::string outputFile);
        replace( void );
        ~replace( void );
};

#endif