#include <iostream>

int main()
{
    float N;
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, m100 = 0, m50 = 0, m25 = 0, m10 = 0, m5 = 0, m1 = 0;
    scanf("%f", &N); //Entrada de dados
    if (N > 0 && N < 1000000) //Condição do exercício
    {
        N=N*100;
        while (N >= 10000)
        {
            N = N - 10000;
            n100++;
        }
        while (N >= 5000)
        {
            N = N - 5000;
            n50++;
        }
        while (N >= 2000)
        {
            N = N - 2000;
            n20++;
        }
        while (N >= 1000)
        {
            N = N - 1000;
            n10++;
        }
        while (N >= 500)
        {
            N = N - 500;
            n5++;
        }
        while (N >= 200)
        {
            N = N - 200;
            n2++;
        }
        while (N >= 100)
        {
            N = N - 100;
            m100++;
        }
        while (N >= 50)
        {
            N = N - 50;
            m50++;
        }
        while (N >= 25)
        {
            N = N - 25;
            m25++;
        }
        while (N >= 10)
        {
            N = N - 10;
            m10++;
        }
        while (N >= 5)
        {
            N = N - 5;
            m5++;
        }
        while (N >= 1)
        {
            N = N - 1;
            m1++;
        }
        printf("NOTAS:\n");
        printf("%d nota(s) de R$ 100.00\n", n100);
        printf("%d nota(s) de R$ 50.00\n", n50);
        printf("%d nota(s) de R$ 20.00\n", n20);
        printf("%d nota(s) de R$ 10.00\n", n10);
        printf("%d nota(s) de R$ 5.00\n", n5);
        printf("%d nota(s) de R$ 2.00\n", n2);
        printf("MOEDAS:\n");
        printf("%d moeda(s) de R$ 1.00\n", m100);
        printf("%d moeda(s) de R$ 0.50\n", m50);
        printf("%d moeda(s) de R$ 0.25\n", m25);
        printf("%d moeda(s) de R$ 0.10\n", m10);
        printf("%d moeda(s) de R$ 0.05\n", m5);
        printf("%d moeda(s) de R$ 0.01\n", m1);
    }
    return 0;
}
