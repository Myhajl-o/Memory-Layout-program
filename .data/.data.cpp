#include <iostream>
int a{1}; //потрапляють глобальні ініціалізовані (не нулем) змінні
int b{2};
int c{3};
int d{4};
int e{5};
int main ()
{
      static int f{6}; // також потрапляє статична ініціалізована змінна
      std::cout<<"В сегмент .data потрапляють\n"<< 
      "глобальні ініціалізовані змінні та статичні ініціалізовані змінні"<<std::endl;
      std::cout<<&f<<"\t  /\\  "<<std::endl;
      std::cout<<&e<<"\t /  \\ "<<std::endl;
      std::cout<<&d<<"\t/____\\"<<std::endl;
      std::cout<<&c<<"\t  ||  "<<std::endl;
      std::cout<<&b<<"\t  ||  "<<std::endl;
      std::cout<<&a<<"\t  ||  "<<std::endl;
      std::cout<<"\nВ даний сегмент пам'яті\n"<<
      "дані записуються знизу вверх відносно порядку їх задання"<<std::endl;
      return 0;
}