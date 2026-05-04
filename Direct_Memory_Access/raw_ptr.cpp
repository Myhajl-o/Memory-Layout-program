#include <iostream>
#include <fstream>
void read(bool& b)
{
      std::ifstream F("static.txt");
      if(F.is_open()){
            F>>b;
            F.close();
      }
}
void write(bool& b)
{
      std::ofstream F("static.txt");
      if(F.is_open()){
            F<<b;
            F.close();
      }
}
const char*h="Hello Gemini";
bool breaker{true};
int main ()
{
      read(breaker);
      if(breaker)
      {
            std::cout<<(void*)h<<std::endl;
      }else{
            std::cout<<"Введіть адресу за якою хочете перейти :"<<std::endl;
            void*temp;
            std::cin>>std::hex>>temp;
            std::cout<<reinterpret_cast<char*>(temp)<<std::endl;
      }
      breaker=false;
      write(breaker);
      return 0;
}