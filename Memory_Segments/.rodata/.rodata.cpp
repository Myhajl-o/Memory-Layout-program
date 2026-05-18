#include <iostream>
const int a{1};
const int b{2};
const int c{3};
const char*d=".";
int main ()
{
      static const int e{4};
      const char*f=",";
      std::cout<<"До сегменту даних .rodata потрапляєть такі змінні:\n"<<
      "глобальні константи, глобальний рядковий літерал,\n"<<
      "статичні константи, локальний рядковий літерал"<<std::endl;
      std::cout<<(void*)f<<"\t  /\\  "<<std::endl;
      std::cout<<&e<<"\t /  \\ "<<std::endl;
      std::cout<<(void*)d<<"\t/____\\"<<std::endl;
      std::cout<<&c<<"\t  ||  "<<std::endl;
      std::cout<<&b<<"\t  ||  "<<std::endl;
      std::cout<<&a<<"\t  ||  "<<std::endl;
      std::cout<<"\nВ даний сегмент пам'яті\n"<<
      "дані записуються знизу вверх відносно порядку їх задання"<<std::endl;
      return 0;
}