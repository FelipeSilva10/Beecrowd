#include <stdio.h>

int main() {
    int A,B,C,D,DIFERENCA; //Declaração de variáveis
    scanf("%d %d %d %d",&A,&B,&C,&D); //Atribuindo valor às variáveis
    DIFERENCA = (A * B - C * D); //Cálculo da diferença de A vezes B com C vezes D
    printf("DIFERENCA = %d\n",DIFERENCA); //Resultado da diferença
    return 0;
}
