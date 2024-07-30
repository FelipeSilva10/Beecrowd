#include <iostream>

int main()
{
    int N, N2, n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;
    scanf("%d", &N); //Entrada de dados
    N2=N;
    if (N > 0 && N < 1000000) //Condição do exercício
    {
        while (N>=100)
        {
            N = N-100;
            n100++;
        }
        while (N>=50)
        {
            N = N-50;
            n50++;
        }
        while (N>=20)
        {
            N = N-20;
            n20++;
        }
        while (N>=10)
        {
            N = N-10;
            n10++;
        }
        while (N>=5)
        {
            N = N-5;
            n5++;
        }
        while (N>=2)
        {
            N = N-2;
            n2++;
        }
        while (N>=1)
        {
            N = N-1;
            n1++;
        }
        printf("%d\n", N2);
        printf("%d nota(s) de R$ 100,00\n", n100);
        printf("%d nota(s) de R$ 50,00\n", n50);
        printf("%d nota(s) de R$ 20,00\n", n20);
        printf("%d nota(s) de R$ 10,00\n", n10);
        printf("%d nota(s) de R$ 5,00\n", n5);
        printf("%d nota(s) de R$ 2,00\n", n2);
        printf("%d nota(s) de R$ 1,00\n", n1);
    }
    return 0;
}
