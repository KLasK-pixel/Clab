#include <iostream>

int main() {
    int n;
    std::cout << "Vvedite kolichestvo chisel: ";
    std::cin >> n;

    std::cout << "Vvedite " << n << " chisel: ";

    for(int i = 0; i < n; i++) {
        int chislo;
        std::cin >> chislo;

        if(chislo >= 100 && chislo <= 999) {
            int sotni = chislo / 100;
            int desyatki = (chislo / 10) % 10;
            int edinicy = chislo % 10;

            if(sotni != desyatki && sotni != edinicy && desyatki != edinicy) {
                std::cout << chislo << " ";
            }
        }
    }

    return 0;
}