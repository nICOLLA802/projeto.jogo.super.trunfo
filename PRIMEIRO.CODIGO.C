#include <stdio.h>
int main(){
int idade;
float altura;
char nome[50];
int matricula;
printf("Digite a sua idade: \n");
scanf("%d", &idade);
printf("Digite a sua atura: \n");
scanf("%f", &altura);
printf("Digite a seu nome: \n");
scanf("%s", &nome);
printf("Digite a sua matricula: \n");
scanf("%d", &matricula);
printf("nome do aluno:%S - matricula:%d", nome, matricula);
printf("Idade:%d - altura:%f", idade , altura);
return 0;
}
