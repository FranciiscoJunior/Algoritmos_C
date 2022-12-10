#include<stdio.h>
int main(){

    char nome[40];
    float valorHora;
    float pagamento;
    int horasTrabalhadas;

    printf("Informe um nome:\n");
    scanf("%s",&nome);

    printf("Qual o valor pago por horas:\n");
    scanf("%f",&valorHora);

    printf("Informe a quantidade de horas trabalhadas:\n");
    scanf("%d",&horasTrabalhadas);

    pagamento = valorHora*horasTrabalhadas;

    printf("O pagamento para o %s nome, "deve ser", %f pagamento: \n);

return 0;
system("PAUSE");
};
