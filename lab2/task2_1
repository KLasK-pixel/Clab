#include <iostream>

int main() {
    int n;
    std::cout << "Vvedite kol-vo chisel: ";
    std::cin >> n;
    
  if (n <= 0) {
    std::cout << "\nOshibka: kol-vo chisel dolzhno byt polozhitelnym!\n";
    return 1; 
  }
    int onlyEvenCount = 0;
    int equalEvenOddCount = 0;

    for (int i = 0; i < n; i++) {
        char num[50];
        std::cout << "chislo " << (i + 1) << ": ";
        std::cin >> num;

        int evenDigits = 0; //ñ÷¸ò÷èê ÷¸òíûõ â òåêóùåì ÷èñëå
        int oddDigits = 0; //íå÷¸òíûõ
        bool allEven = true; //ôëàã (âñå öèôðû ÷¸òíûå)
        bool hasNonDigit = false; //ôëàã (íåò ïîñòîðîííèõ ñèìâîëîâ)

        for (int j = 0; num[j] != '\0'; j++) {
            char c = num[j];
            if (c < '0' || c > '9') {
                hasNonDigit = true;
                allEven = false;
                continue;
            }
            int digit = c - '0';
            if (digit % 2 == 0) {
                evenDigits++;
            } else {
                oddDigits++;
                allEven = false;
            }
        }

        if (num[0] != '\0' && allEven && !hasNonDigit) {
            onlyEvenCount++;
        }

        if (evenDigits == oddDigits) {
            equalEvenOddCount++;
        }
    }

    std::cout << "\nOnly chetnie: " << onlyEvenCount << "\n";
    std::cout << "Chisla s = chetnih and nechetnih: " << equalEvenOddCount << "\n";

    std::cout << "\nRazraotchiki: Duyzhii, Tishkin\n";
    std::cout << "Polycheno: 19.02.2026\n";
    std::cout << "Sdano:    25.02.2026\n";

    return 0;
}
