#include <iostream>

int main(int argc, char* argv[]) {
    if(argc > 1) {
        for(int i = argc - 1; i > 0; i--) {
            std::cout << argv[i] << " ";
        }
    }

    return 0;
}