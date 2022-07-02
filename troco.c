#include<stdio.h>
int main(){

    float preco;
    float dinheiro;
    float troco;
    int quantidade;

    printf("Informe o preco unitario do produto:\n");
    scanf("%f",&preco);

    printf("Informe a quantidade comprada:\n");
    scanf("%f",&quantidade);

    printf("Informe a quantidade de dinheiro recebida:\n");
    scanf("%f",&dinheiro);

    troco = dinheiro - (preco*quantidade);

    printf("O valor recebido de troco e: 0.3%f\n",troco);

    return 0;
    system("PAUSE");
};