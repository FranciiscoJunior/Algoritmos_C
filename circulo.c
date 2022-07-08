#include<stdio.h>
int main(){

    float r, area, pi;

    printf("informe o valor do raio do circulo: \n");
    scanf("%f",&r);

    pi = 3,14159;
    area = pi*r*r;

    printf("a area e: %f\n", area);

    return 0;
    system("PAUSE");
};