#include <iostream>
#include <algorithm> 
#include <vector>

int main()
{
    double X, Y, Z, A, B, C; //Declaração de variáveis com ponto flutuante;
    std::cin>>X>>Y>>Z; //Entrada de dados nas variáveis auxiliares
    std::vector<double> numeros = {X,Y,Z}; //Inserção das variáveis em um vetor dinâmico
    std::sort(numeros.begin(), numeros.end(),std::greater<double>()); /*Essa função ordena um intervalo de números em ordem crescente 
    e a função "std::greater<double>()" reordena em ordem decrescente*/
    A = numeros[0]; //Atribuir o maior número a A
    B = numeros[1];
    C = numeros[2]; //O menor número a C
    if(A>0&&B>0&&C>0){
        if(A>=(B+C)){
            std::cout<<"NAO FORMA TRIANGULO\n";
            return 0;
        }
        if(A*A==(B*B+C*C)){
            std::cout<<"TRIANGULO RETANGULO\n";
        }
        if(A*A>(B*B+C*C)){
        std::cout<<"TRIANGULO OBTUSANGULO\n";
        }
        if(A*A<(B*B+C*C)){
        std::cout<<"TRIANGULO ACUTANGULO\n";
        }
        if(A==B&&B==C&&C==A){
        std::cout<<"TRIANGULO EQUILATERO\n";
        }
        if(A==B&&C!=B||B==C&&A!=B||C==A&&B!=C){
        std::cout<<"TRIANGULO ISOSCELES\n";
        }
    }
    return 0;
}
