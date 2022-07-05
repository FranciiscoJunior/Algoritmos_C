#include<stdio.h>
int main(){

    double x, y, media;

    printf("Digite o primeiro numero:\n");
    scanf("%lf",&x);

    printf("Digite o segundo numero:\n");
    scanf("%lf",&y);

    media = (x=y)/2.0;

    printf("media: %lf\n", media);

    return 0;
    system("PAUSE");
};