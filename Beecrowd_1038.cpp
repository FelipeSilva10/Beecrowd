#include <iostream>

int main()
{
    int codigo,quantidade;
    double preco;
    scanf("%d %d",&codigo,&quantidade);

    switch (codigo)
    {
    case 1:
        preco=quantidade*4.00;
        break;
    case 2:
        preco=quantidade*4.50;
        break;
    case 3:
        preco=quantidade*5.00;
        break;
    case 4:
        preco=quantidade*2.00;
        break;
    case 5:
        preco=quantidade*1.50;
        break;
    }
    printf("Total: R$ %.2lf\n",preco);
    return 0;
}
