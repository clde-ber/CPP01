#include "replace.hpp"

int main(int ac, char **av)
{
  if (ac != 4)
        return 0;
    const char* s1(av[2]);
    const char* s2(av[3]);
    char    c('\0');
    std::string buf("");
    char file[255];
    const char *name(0);
    int i = 0;
    int x = 0;
   if (std::strcmp(s1, "") == 0 || std::strcmp(s2, "") == 0)
      return 0;
  std::memset(file, 0, std::strlen(file));
  name = std::strcpy(file, av[1]);
  name = std::strcat(file, ".replace");
  std::ifstream ifs(av[1], std::ifstream::in);
  std::ofstream ofs(name, std::ofstream::out);
  while (ifs.good() && ifs.eof() == 0)
  {
    c = ifs.get();
    buf += c;
    x++;
  }
  while (i < x - 1)
  {
     if (buf.at(i) == s1[0] || buf.at(i) == s2[0])
     {
        if (buf.compare(i, std::strlen(s1), s1) == 0 || buf.compare(i, std::strlen(s2), s2) == 0)
        {
            if (buf.compare(i, std::strlen(s1), s1) == 0)
            {
                ofs.write(av[3], std::strlen(s2));
                i += std::strlen(s1);
                buf += s2;
            }
            else
            {
                ofs.write(av[2], std::strlen(s1));
                i += std::strlen(s2);
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
  return 0;
}