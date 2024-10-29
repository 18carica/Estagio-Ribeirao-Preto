#include <iostream>
#include <string>

int contarLetraA(const std::string& texto) {
    int contador = 0;
    for (char caractere : texto) {
        if (caractere == 'a' || caractere == 'A') {
            contador++;
        }
    }
    return contador;
}

int main() {
    std::string texto;
    std::cout << "Digite uma string: ";
    std::getline(std::cin, texto); // Permite a entrada de uma linha completa com espaços

    int ocorrencias = contarLetraA(texto);
    if (ocorrencias > 0)
        std::cout << "A letra 'a' aparece " << ocorrencias << " vezes na string." << std::endl;
    else
        std::cout << "A letra 'a' não aparece na string." << std::endl;

    return 0;
}
