#include <iostream>

int main()
{
    int inicio_horas, fim_horas, duracao_horas, inicio_minutos, fim_minutos, duracao_minutos; // Declaração de variáveis inteiras
    std::cin >> inicio_horas >> inicio_minutos >> fim_horas >> fim_minutos;                   // Entrada de dados
    if (inicio_horas >= 0 && inicio_horas <= 24 && fim_horas >= 0 && fim_horas <= 24)
    { // Condição imposta pelo exercício, entradas condizentes com o sistema de horário em horas.
        if (inicio_minutos >= 0 && inicio_minutos <= 59 && fim_minutos >= 0 && fim_minutos <= 59)
        { // Condição imposta pelo exercício, entradas condizentes com o sistema de horário em minutos.
            if (inicio_minutos >= fim_minutos)
            { // Condição se o inicio for um horário, em minutos, (número) maior que o fim, tipo um sentido hórario.
                duracao_minutos = 60 - inicio_minutos + fim_minutos;
            }
            if (inicio_minutos < fim_minutos)
            { // Condição se o inicio for um horário, em minutos, (número) menor que o fim, um sentido anti-hórario.
                duracao_minutos = fim_minutos - inicio_minutos;
            }
            if (inicio_horas >= fim_horas)
            { // Condição se o inicio for um horário, em horas, (número) maior que o fim, tipo um sentido hórario.
                duracao_horas = 24 - inicio_horas + fim_horas;
            }
            if (inicio_horas < fim_horas)
            { // Condição se o inicio for um horário, em horas, (número) menor que o fim, um sentido anti-hórario.
                duracao_horas = fim_horas - inicio_horas;
            }
            std::cout << "O JOGO DUROU " << duracao_horas << " HORA(S) E " << duracao_minutos << " MINUTO(S)\n";
        }
    }
    return 0;
}