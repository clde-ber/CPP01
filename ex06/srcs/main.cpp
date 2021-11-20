#include "Karen.hpp"

int main( int ac, char **av )
{
    Karen obj;
    
    if (ac == 1)    
        return 0;
    std::string arg(av[1]);
    if (ac != 2)
        return 0;
    if (ac == 2)
        obj.complain(arg);
    return 0;
}