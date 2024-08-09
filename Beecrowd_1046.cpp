#include <iostream>

int main()
{
    int inicio, fim, duracao;  // Declaração de variáveis inteiras
    std::cin >> inicio >> fim; // Entrada de dados
    if (inicio >= 1 && inicio <= 24 && fim >= 1 && fim <= 24)
    { // Condição imposta pelo exercício, entradas condizentes com o sistema de horário.
        if (inicio >= fim)
        { // Condição se o inicio for um horário (número) maior que o fim, tipo um sentido hórario.
            std::cout << "O JOGO DUROU " << 24 - inicio + fim << " HORA(S)\n";
        }
        if (inicio < fim)
        { // Condição se o inicio for um horário (número) menor que o fim, um sentido anti-hórario.
            std::cout << "O JOGO DUROU " << fim - inicio << " HORA(S)\n";
        }
    }
    return 0;
}