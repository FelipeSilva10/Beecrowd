#include <stdio.h>

int main() {
    int cp1,np1,cp2,np2; //Declaração de variáveis inteiras
    double vp1,vp2; //Declaração de variáveis
    scanf("%d %d %lf\n%d %d %lf",&cp1,&np1,&vp1,&cp2,&np2,&vp2); //Entrada de dados: atribuição de valores dos produtos 1 e 2
    printf("VALOR A PAGAR: R$ %.2lf\n", (np1*vp1+np2*vp2)); //Saída de dados: Valor total da compra
    return 0;
}
