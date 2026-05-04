#include <iostream>
int* e(int number)
{
      int*a;
      a=&number;
      return a;
      // УВАГА: ЦЕЙ ПРИКЛАД СТВОРЮЄ ВИСЯЧИЙ ВКАЗІВНИК (DANGLING POINTER) ДЛЯ ДЕМОНСТРАЦІЇ. 
      // У РЕАЛЬНОМУ КОДІ ПОВЕРТАТИ АДРЕСУ ЛОКАЛЬНОЇ ЗМІННОЇ 
      // — ЦЕ СМЕРТЬ ПРОГРАМИ (UNDEFINED BEHAVIOR).
}
int main ()
{
      int a{1};
      int b;
      int c{2};
      int d{3};
      std::cout<<"Є дуже багато даних що записується в stack під час роботи програми\n"<<
      "але в цьому прикладі будуть тільки розглянуті локальні змінні,\n"<<
      "та параметри функції"<<std::endl;
      std::cout<<&a<<"    ||    "<<std::endl;
      std::cout<<&b<<"  __||__  "<<std::endl;
      std::cout<<&c<<"  \\    /  "<<std::endl;
      std::cout<<&d<<"   \\  /   "<<std::endl;
      std::cout<<e(5)<<"    \\/    "<<std::endl;
      std::cout<<"\nВ даний сегмент пам'яті\n"<<
      "дані записуються зверху вниз відносно порядку їх задання"<<std::endl;
      return 0;
}