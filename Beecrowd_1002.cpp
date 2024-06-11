#include <iostream>

int main() {
    double r,pi,area; //Declaração de variáveis
    pi = 3.14159; //Valor constante
    scanf( "%lf", &r); //Entrada de dados, valor do raio
    area = pi*(r*r); //Cálcula da área
    printf("A=%.4f\n",area); //Saída de dados, resultado da operação
    return 0;
}