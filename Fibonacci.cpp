#include <iostream>

bool pertenceFibonacci(int numero) {
    int anterior = 0, atual = 1, proximo;
    if (numero == 0 || numero == 1) return true; // Verifica se o n�mero � 0 ou 1
    while (atual <= numero) {
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
        if (atual == numero) return true; // Se o valor atual for igual ao n�mero, ele pertence � sequ�ncia
    }
    return false; // Caso contr�rio, n�o pertence � sequ�ncia
}

int main() {
    int numero;
    std::cout << "Digite um n�mero para verificar se pertence � sequ�ncia de Fibonacci: ";
    std::cin >> numero;

    if (pertenceFibonacci(numero))
        std::cout << numero << " pertence � sequ�ncia de Fibonacci." << std::endl;
    else
        std::cout << numero << " n�o pertence � sequ�ncia de Fibonacci." << std::endl;

    return 0;
}
