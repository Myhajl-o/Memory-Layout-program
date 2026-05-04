#include <iostream>
#include <vector>
#include <string>
#include <memory>
// для зручності пам'ять буде виділятися в тілі функції main
// тому що абсолютно не важливо для heap де буде записаний оператор new
// головне звільнити heap при ручному виділенні пам'яті
int main ()
{
      int*a = new (int){1};
      int*b = (int*)malloc(sizeof(int));
      *b=2;
      int*c = (int*)calloc(1,sizeof(int));
      *c=3;
      std::vector<int> d{4};
      std::string e = "Hello word, A string literal must be longer than 15 bytes to be stored in the heap";
      std::unique_ptr<int> f = std::make_unique<int>(6);
      std::cout<<"В heap можна покласти дані тільки вручну(видаляти також треба вручну),"<<
      "\nабо використовувати розумні контейнери в яких під капотом прописане видалення даних із heap."<<
      "Як наведено в коді"<<std::endl;
      std::cout<<f.get()<<"\t  /\\  "<<std::endl;
      std::cout<<(void*)e.data()<<"\t /  \\ "<<std::endl;
      std::cout<<d.data()<<"\t/____\\"<<std::endl;
      std::cout<<c<<"\t  ||  "<<std::endl;
      std::cout<<b<<"\t  ||  "<<std::endl;
      std::cout<<a<<"\t  ||  "<<std::endl;
      std::cout<<"\nВ даний сегмент пам'яті\n"<<
      "дані записуються знизу вверх відносно порядку їх задання"<<std::endl;
      // ОБОВ'ЯЗКОВО НАХУЙ
      delete a;
      free(b);
      free(c);

      // ЗВІЛЬНЯЄТЬСЯ ПАМ'ЯТЬ ПРИ РУЧНОЧУ ВИДІЛЕННІ ПАМ'ЯТІ ВРУЧНУ НАХУЙ
      // std::vector , std::string - це розумні контейнери які самі змивають за собою
      return 0;
}