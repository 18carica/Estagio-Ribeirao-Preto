#include <iostream>

int main() {
    int INDICE = 12;
    int SOMA = 0;
    int K = 1;

    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }

    std::cout << "O valor final de SOMA é: " << SOMA << std::endl;

    return 0;
}
