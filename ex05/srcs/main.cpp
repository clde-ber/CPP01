#include "Karen.hpp"

void Karen::complain( std::string level )
{
    for (int i = 0 ; i < 4; i++)
    {
        if (level.compare(this->_level[i]) == 0)
        {
             void (Karen::*f)() = _funct[i];
             (this->*f)();
        }

    }
}

int main( void )
{
    std::string buf("");
    Karen obj;

    while (buf.compare("EXIT"))
    {
        getline(std::cin, buf);
        obj.complain(buf);
    }
    return (0);
}