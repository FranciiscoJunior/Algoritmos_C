#include<stdio.h>
int main(){
    
    float largura;
    float comprimento;
    float metroquadrado;
    float area;
    float preco;

    printf("informe a largura do terreno:\n");
    scanf("%f",&largura);

    printf("informe o comprimento do terreno:\n");
    scanf("%f",&comprimento);

    printf("informe o valor do metro quadrado:\n");
    scanf("%f",&preco);

    area = largura * comprimento;
    preco = area * metroquadrado;

    printf("A  area do terreno e: 0:2%f\n", area);
    printf("O preco do terreno e: 0:2%f\n", preco);

    return 0;
    system ("PAUSE");
};