#include <iostream>

int main() {
    double R; //Declaração de variáveis
    double pi = 3.14159; //Definindo pi
    scanf("%lf", &R); //Entrada de dados: valor do raio
    printf("VOLUME = %.3lf\n", (4.0/3.0)*pi*(R*R*R)); //Saída de dados: fórmula da esfera e resultado do volume
    return 0;
}
