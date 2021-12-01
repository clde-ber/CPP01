
#include "replace.hpp"

int main(int ac, char **av)
{
    std::string argZero("");
    std::string argOne("");
    std::string argTwo("");
    std::string res("");

    if (ac != 4)
    {
        std::cout << "Invalid arguments : 4 needed [executable name] [file_name] [string 1] [string 2]" << std::endl;
        return 1;
    }
    replace file;
    argZero += av[1];
    argOne += av[2];
    argTwo += av[3];
    res = argZero + ".replace";
    if (argOne.empty() or argTwo.empty())
    {
        std::cout << "Invalid arguments : [string 1] and [string 2] cannot be empty" << std::endl;
        return 1;
    }
    file.writeContentToFile(argZero, argOne, argTwo, res);
    return 0;
}