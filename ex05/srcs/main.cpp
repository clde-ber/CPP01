#include "Karen.hpp"

int main( int ac, char **av )
{
    Karen obj;
    bool is_level(0);

    if (ac > 2)
    {
        std::cout << "Invalid argument. Please retry with or without only one level" << std::endl;
        return 1;
    }
    if (ac == 1)
    {
        for (int i = 0; i < 4; i++)
            obj.complain(obj.getLevel(i));
        return 0;
    }
    for (int i = 0; i < 4; i++)
    {
        if (obj.getLevel(i).compare(av[1]) == 0)
        {
            is_level = 1;
            obj.complain(obj.getLevel(i));
        }
    }
    if (is_level == 0)
    {
        std::cout << "Invalid argument. Levels are: DEBUG, INFO, WARNING, ERROR" << std::endl;
        return 1;
    }
    return 0;
}