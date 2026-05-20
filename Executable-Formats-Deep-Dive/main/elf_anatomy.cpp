#include <iostream>
#include <vector>
int x{33};        //.data
int y{0};         //.bss
const int z{99};  //.rodata
int main ()
{
      std::vector<char> hi{'H','e','l','l','o',' ','w','o','r','l','d','\n'};
      for(char& letter : hi)
      {
            std::cout<<letter;
      }
      return 0;
}