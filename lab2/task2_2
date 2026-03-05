#include <iostream>

int main() {
    int number = 129;
    int temp = number;
    int zeroCount = 0;

    std::cout << "Chislo: " << number << "\n";
    std::cout << "Dvoichnaya zapis: ";

    // выводим двоичную запись
    while (temp > 0) {
        int bit = temp % 2;
        std::cout << bit;
        if (bit == 0) zeroCount++;
        temp /= 2;
    }

    std::cout << "\n";


    temp = number;// считаем нули ещё раз
    zeroCount = 0;
    while (temp > 0) {
        if (temp % 2 == 0) zeroCount++;
        temp /= 2;
    }

    std::cout << "Znachashih 0 v dvoinchnoi zapisi: " << zeroCount << "\n";

    std::cout << "\nRazraotchiki: Duyzhii, Tishkin\n";
    std::cout << "Polycheno: 19.02.2026\n";
    std::cout << "Sdano:    25.02.2026\n";

    return 0;
}
