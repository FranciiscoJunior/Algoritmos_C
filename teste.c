#include <stdio.h>
int main()
{

    int idade[4];
    char nome[40];
    float salario1[10];
    float salario2[10];

    printf("informe qual e o seu nome:\n");
    scanf("%s", &nome);

    printf("digite uma idade:\n");
    scanf("%d", &idade);

    printf("digite qual foi o seu salario:\n");
    scanf("%f", &salario1);

    printf("digite qual foi o seu salario:\n");
    scanf("%f", &salario2);

    printf("A idade informada e: 0.3%d\n", idade);
    printf("O nome informado e: %s\n", nome);
    printf("O salario informado e: 0.3%f\n", salario1);
    printf("O salario informado e: 0.3%f\n", salario2);

    return 0;
    system("PAUSE");
};