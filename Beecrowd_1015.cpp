#include <iostream>
#include <cmath>

int main() {
    double x1,x2,y1,y2; //Declaração de variáveis
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    printf("%.4lf\n",sqrt(pow((x2-x1),2)+pow((y2-y1),2)));
    return 0;
}
