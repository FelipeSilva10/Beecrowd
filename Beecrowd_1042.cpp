#include <iostream>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && b > c && c < a) //1
    {
        printf("%d\n%d\n%d\n", c, b, a);
    }
    if (a > c && c > b && b < a) //2
    {
        printf("%d\n%d\n%d\n", b, c, a);
    }
    if (b > a && a > c && c < b) //3
    {
        printf("%d\n%d\n%d\n", c, a, b);
    }
    if (b > c && c > a && a < b) //4
    {
        printf("%d\n%d\n%d\n", a, c, b);
    }
    if (c > a && a > b && b < c) //5
    {
        printf("%d\n%d\n%d\n", b, a, c);
    }
    if (c > b && b > a && a < c) //6
    {
        printf("%d\n%d\n%d\n", a, b, c);
    }
    printf("\n%d\n%d\n%d\n", a, b, c);
    return 0;
}
