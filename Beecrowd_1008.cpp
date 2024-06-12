#include <stdio.h>

int main() {
    int n,h;
    double d;
    scanf("%d %d %lf", &n,&h,&d);
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", n, h*d);
    return 0;
}
