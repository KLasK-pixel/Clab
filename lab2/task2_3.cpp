#include <iostream>

int main() {
    int n, k;
    std::cout << "Razmer matrix N = ";
    std::cin >> n;
    std::cout << "Do kakogo chisla (k) = ";
    std::cin >> k;

    std::cout << "\nResult:\n";

    int current = 1;
    int printed = 0;

    for (int i = 0; i < k; i++) {
        std::cout << current << "\t";
        current++;
        printed++;

        // новая строка после каждых n чисел
        if (printed % n == 0) {
            std::cout << "\n";
        }
    }

    // если последняя строка неполная — всё равно перенос
    if (printed % n != 0) {
        std::cout << "\n";
    }

    std::cout << "\nRazraotchiki: Duyzhii, Tishkin\n";
    std::cout << "Polycheno: 19.02.2026\n";
    std::cout << "Sdano:    25.02.2026\n";

    return 0;
}
