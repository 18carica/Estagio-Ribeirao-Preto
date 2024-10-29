#include <iostream>

bool pertenceFibonacci(int numero) {
    int anterior = 0, atual = 1, proximo;
    if (numero == 0 || numero == 1) return true; // Verifica se o número é 0 ou 1
    while (atual <= numero) {
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
        if (atual == numero) return true; // Se o valor atual for igual ao número, ele pertence à sequência
    }
    return false; // Caso contrário, não pertence à sequência
}

int main() {
    int numero;
    std::cout << "Digite um número para verificar se pertence à sequência de Fibonacci: ";
    std::cin >> numero;

    if (pertenceFibonacci(numero))
        std::cout << numero << " pertence à sequência de Fibonacci." << std::endl;
    else
        std::cout << numero << " não pertence à sequência de Fibonacci." << std::endl;

    return 0;
}
