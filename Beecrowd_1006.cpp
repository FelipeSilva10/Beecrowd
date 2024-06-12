#include <stdio.h>

int main() {
    double A,B,C,MEDIA; //Declaração de variáveis
    scanf("%lf %lf %lf",&A,&B,&C); //Atribuindo valor às variáveis
    MEDIA=(2*A+3*B+5*C)/10; //Cálculo da média com pesos
    printf("MEDIA = %.1lf\n",MEDIA); //Resultado da média com 1 casa decimal
    return 0;
}
