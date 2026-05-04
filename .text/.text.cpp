#include <iostream>
// Ці функції після компіляції перетворяться на машинні інструкції 
// і будуть покладені в сегмент .text
void functionA() {
    int a = 1 + 1;
}

void functionB() {
    int b = 2 + 2; 
}

int main() {
    std::cout << "До сегменту коду .text потрапляють:\n"
              << "скомпільовані машинні інструкції всіх функцій програми.\n" << std::endl;

    // Кастуємо імена функцій до (void*), щоб cout вивів їх як адреси в пам'яті
    std::cout << (void*)main      << "\t  /\\  "<<std::endl;
    std::cout << (void*)functionB << "\t /  \\ "<<std::endl;
    std::cout << (void*)functionA << "\t/____\\"<<std::endl;

    std::cout << "\nВ даний сегмент пам'яті дані (код) записуються знизу вверх,\n"
              << "але цей сегмент має права ТІЛЬКИ НА ЧИТАННЯ та ВИКОНАННЯ (Read + Execute).\n"
              << "Записати сюди нові дані під час роботи програми неможливо.\n" << std::endl;
    std::cout << "--- Сирі байти машинних інструкцій функції functionA ---" << std::endl;
    
    // Беремо адресу функції functionA і кажемо, що тепер це вказівник на звичайні байти (unsigned char)
    unsigned char* byte_ptr = (unsigned char*)functionA;
    
    // Читаємо перші 15 байтів коду цієї функції прямо з сегмента .text
    for (int i = 0; i < 15; ++i) {
        std::cout << std::hex <<(int)byte_ptr[i] << " ";
    }
    std::cout << std::dec << "\n(Це і є той самий асемблер/машинний код, який читає процесор!)" << std::endl;

    return 0;
}