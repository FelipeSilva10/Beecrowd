#include <iostream>

int main()
{
    double n1,n2,n3,n4,n5,media,mediarecup;
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
    media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    printf("Media: %.1lf\n",media);
    if(media>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    if(media<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    if(media>=5&&media<7)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&n5);
        printf("Nota do exame: %.1lf\n",n5);
        mediarecup=(n5+media)/2;
        if(mediarecup>=5)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",mediarecup);
    }
    return 0;
}
