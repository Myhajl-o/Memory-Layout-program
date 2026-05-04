#include <iostream>
double PI{3.14159265359};
const char*messege1="I hate vibe coders";
const char*messege2="I love C and C++";
int x{657};
int y{1395};
double checkNumber(){
    double number;
    std::cin>>number;
    if(std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        return -1;
    }
    std::cin.ignore(10000, '\n');
    return number; 
}
void valueINT()
{
      void*temp;
      std::cout<<"Введіть адресу змінної, яку ви хочете вивести на екран:\n"<<std::endl;
      std::cin>>std::hex>>temp;
      int*number=reinterpret_cast<int*>(temp);
      std::cout<<*number<<std::endl;
      return;
}
void valueDOUBLE()
{
      void*temp;
      std::cout<<"Введіть адресу змінної, яку ви хочете вивести на екран:\n"<<std::endl;
      std::cin>>std::hex>>temp;
      double*number=reinterpret_cast<double*>(temp);
      std::cout<<*number<<std::endl;
      return;
}
void valueCHAR()
{
      void*temp;
      std::cout<<"Введіть адресу змінної, яку ви хочете вивести на екран:\n"<<std::endl;
      std::cin>>std::hex>>temp;
      std::cout<<reinterpret_cast<char*>(temp)<<std::endl;
      return;
}
bool switchPTR(){
      switch (static_cast<int>(checkNumber())){
            case 0:
                  return true;
            case 1:
                  valueINT();
                  return false;
            case 2:
                  valueDOUBLE();
                  return false;
            case 3:
                  valueCHAR();
                  return false;
            default:
                  std::cout<<"Введіть значення ще раз"<<std::endl;
                  return false;
      }

}

int main ()
{
      std::cout<<"Ведіть тип змінної адресу якої хочете ввести\n"<<std::endl;
      while(true){
            std::cout<<"\n1. int"<<std::endl;
            std::cout<<"2. double"<<std::endl;
            std::cout<<"3. char"<<std::endl;
            std::cout<<"0. exit"<<std::endl;
            if(switchPTR()) break;
      }
      return 0;
}