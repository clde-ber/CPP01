
#include "replace.hpp"

int main(int ac, char **av)
{
    std::string argZero("");
    std::string argOne("");
    std::string argTwo("");
    std::string res("");

    if (ac != 4)
        return 1;
    replace file;
    argZero += av[1];
    argOne += av[2];
    argTwo += av[3];
    res = argZero + ".replace";
    if (argZero == "" or argOne == "" or argTwo == "")
        return 1;
    file.writeContentToFile(argZero, argOne, argTwo, res);
    return 0;
}