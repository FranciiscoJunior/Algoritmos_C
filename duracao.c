#include<stdio.h>
int main(){

    int duracao;
    int horas;
    int resto;
    int minutos;
    int segundos;

    printf("informe a duracao em segundos: \n");
    scanf("%d",&duracao);

    horas = duracao\3600;
    resto = duracao\3600;

    minutos = resto\60;
    segundos = resto\60;

    printf("horas: %d\n",horas);    
    printf("minutos: %d\n",minutos);
    printf("segundos: %d\n",segundos);

    return 0;
    system("PAUSE");
};