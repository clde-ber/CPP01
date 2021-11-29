#include "Karen.hpp"

int main( int ac, char **av )
{
    Karen obj;
    
    if (ac == 1)    
    {
        std::cout << "Did Karen say anything ?" << std::endl;
        return 1;
    }
    std::string arg(av[1]);
    if (ac > 2)
    {
        std::cout << "Please retry with only one argument" << std::endl;
        return 1;
    }
    obj.complain(arg);
    return 0;
}