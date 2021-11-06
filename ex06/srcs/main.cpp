#include "Karen.hpp"

void Karen::complain( std::string level )
{
    int i(0);

    for (i = 0; i < 4; i++)
         if (level.compare(this->_level[i]) == 0)
            break ;
    void (Karen::*f)() = _funct[i];
    switch (i)
        {
                case 0:
                    (this->*f)();
                    break;
                case 1:
                    (this->*f)();
                    break;
                case 2:
                    (this->*f)();
                    break;
                case 3:
                    (this->*f)();
                    break;
                default:
                    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        }
    while (++i < 4)
    {
        void (Karen::*f)() = _funct[i];
        (this->*f)();
    }
}

int main( int ac, char **av )
{
    Karen obj;

    if (ac != 2)
        return 0;
    obj.complain(av[1]);
    return (0);
}