#include "Karen.hpp"

void Karen::complain( std::string level )
{
    try
    {
        Karen()
        level.compare("DEBUG") and level.compare("INFO") and level.compare("WARNING") and level.compare("ERROR");
    }
    catch(const std::string& e)
    {
        std::cout << level << '\n';
    }
    
}

int main( void )
{
    std::string buf("");
    Karen ptr;

    getline(std::cin, buf);
    ptr.complain(buf);


}