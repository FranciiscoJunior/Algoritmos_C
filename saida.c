#include<stdio.h>
#include<string.h>
int main(){

    int idade;
    float salario;
    char nome[11];
    char sexo;

    idade = 32;
    salario = 1.212,00;
    strcpy(nome, "Maria Silva");
    sexo = 'F';

    printf("A funcionaria %S, sexo %c, ganha %.4lf e tem %d anos", nome, sexo, salario, idade);

    return 0;
    system("PAUSE");
};