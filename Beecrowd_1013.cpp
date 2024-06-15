#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,c,ab,cab; //Declaração de variáveis
    scanf("%d %d %d", &a,&b,&c); //Entrada de dados
    ab=(a+b+abs(a-b))/2;
    cab=(c+ab+abs(c-ab))/2;
    printf("%d eh o maior\n",cab);
    return 0;
}
