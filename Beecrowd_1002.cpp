#include <iostream>

int main() {
    double r; //Declaração de variáveis
    float pi,area;
    pi = 3.14159; //Valor constante
    scanf( "%lf", &r); //Entrada de dados, valor do raio
    area = (r*r)*pi; //Cálcula da área
    printf("A=%.4f",area); //Saída de dados, resultado da operação
}