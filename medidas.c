#include<stdio.h>
int main(){

    float A, B, C;
    float areaQuadrado;
    float areaTriangulo;
    float areaTrapezio;

    printf("Informe a medidade de A:\n");
    scanf("%f",&A);

    printf("Informe a medidade de B:\n");
    scanf("%f",&B);

    printf("Informe a medidade de C:\n");
    scanf("%f",&C);

    areaQuadrado = A*A;
    areaTriangulo = A*B\2;
    areaTrapezio = (A+B)*C\2;

    printf("A area do quadrado: %f\n",areaQuadrado);
    printf("A area do trapezio: %f\n",areaTrapezio);
    printf("A area do triangulo: %f\n",areaTriangulo);

    return 0;
    system("PAUSE");
};