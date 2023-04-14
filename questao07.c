#include <stdio.h>

int main(void){
    int idadeemDias;
    int idadeemMeses;
    int idadeemAnos;

    printf("informe sua idade em dias: ");
    scanf("%d", &idadeemDias);

    idadeemMeses = idadeemDias / 12;
    idadeemAnos = idadeemDias / 356;

    printf("\nSe sua idade em dias é: %d,", idadeemDias);
    printf("\nentão, sua idade em meses é: %d,", idadeemMeses);
    printf("\ne sua idade em anos é: %d", idadeemAnos);

return 0;
}