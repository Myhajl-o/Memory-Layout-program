#include <iostream>
int a{0};
int b{1};
const int c{2};
int main()
{
      int d{3};
      int*e=new int{5};
      std::cout<<"+--------------------+"<<std::endl;
      std::cout<<"|   "<<&d<<"   |"<<"     <-- stack"<<std::endl;
      std::cout<<"+--------------------+"<<std::endl;
      std::cout<<"|                    |"<<std::endl;
      std::cout<<"|       __||__       |"<<std::endl;
      std::cout<<"|       \\    /       |"<<std::endl;
      std::cout<<"|        \\  /        |"<<std::endl;
      std::cout<<"|         \\/         |"<<std::endl;
      std::cout<<"|                    |"<<std::endl;
      std::cout<<"|                    |"<<std::endl;
      std::cout<<"|                    |"<<std::endl;
      std::cout<<"|         /\\         |"<<std::endl;
      std::cout<<"|        /  \\        |"<<std::endl;
      std::cout<<"|       /____\\       |"<<std::endl;
      std::cout<<"|         ||         |"<<std::endl;
      std::cout<<"|                    |"<<std::endl;
      std::cout<<"+--------------------+"<<std::endl;
      std::cout<<"|   "<<e<<"   |"<<"   <-- heap"<<std::endl;
      std::cout<<"+--------------------+"<<std::endl;
      std::cout<<"|   "<<&a<<"   |"<<"   <-- .bss"<<std::endl;
      std::cout<<"+--------------------+"<<std::endl;
      std::cout<<"|   "<<&b<<"   |"<<"   <-- .data"<<std::endl;
      std::cout<<"+--------------------+"<<std::endl;
      std::cout<<"|   "<<&b<<"   |"<<"   <-- .rodata"<<std::endl;
      std::cout<<"+--------------------+"<<std::endl;
      std::cout<<"|   "<<(void*)main<<"   |"<<"   <-- text"<<std::endl;
      std::cout<<"+--------------------+"<<std::endl;
      delete e;
      return 0;
}