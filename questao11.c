//Faça um algoritmo para calcular a nota semestral de um aluno. 
// A nota semestral é obtida pela média aritmética entre a nota de 2 bimestres. 
// Cada nota de bimestre é composta por 2 notas de provas.

#include <stdio.h>

int main(void){
    float notaSem;
    float notaBim1;
    float notaBim2;
    float prova1;
    float prova2;
    float prova3;
    float prova4;

    printf("Informe a nota da prova 1: ");
    scanf("%f", &prova1);
    printf("Informe a nota da prova 2: ");
    scanf("%f", &prova2);
    printf("Informe a nota da prova 3: ");
    scanf("%f", &prova3);
    printf("Informe a nota da prova 4: ");
    scanf("%f", &prova4);
    
    notaBim1 = prova1 + prova2;
    notaBim2 = prova3 + prova4;
    notaSem = (notaBim1 + notaBim2) / 2;

    printf("A nota semestral da.o aluna.o é: %.2f", notaSem);
    return 0;
}