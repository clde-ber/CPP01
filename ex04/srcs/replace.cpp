#include "replace.hpp"

int main(int ac, char **av)
{
    const std::string& s1(av[2]);
    const std::string& s2(av[3]);
    char    c('\0');
    std::string buf("");
    std::string file("");
    int i = 0;
    int x = 0;

    if (ac != 4 || s1.compare("") == 0 || s2.compare("") == 0)
        return 0;
    file += av[1];
    file += ".replace";
    std::ifstream ifs(av[1], std::ifstream::in);
    std::ofstream ofs(file, std::ofstream::out);
  while (ifs.good() && ifs.eof() == 0)
  {
    c = ifs.get();
    buf += c;
    x++;
  }
  while (i < x - 1)
  {
     if (buf.at(i) == s1.at(0) || buf.at(i) == s2.at(0))
     {
        if (buf.compare(i, s1.length(), s1) == 0 || buf.compare(i, s2.length(), s2) == 0)
        {
            if (buf.compare(i, s1.length(), s1) == 0)
              ofs.write(av[3], s2.length());
            else
              ofs.write(av[2], s1.length());
            if (buf.compare(i, s1.length(), s1) == 0)
            {
              i += s1.length();
              buf += s2;
            }
            else
            {
              i += s2.length();
              buf += s1;
            }
        }
     }
     else
     {
        ofs.put(buf.at(i));
       i++;
     }
  }
  ifs.close();
  ofs.close();
}