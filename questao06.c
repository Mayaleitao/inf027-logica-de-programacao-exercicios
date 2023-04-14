#include <stdio.h>

int main(){
    int numero1;
    int numero2;
    int quociente;
    int resto;
    
    printf("digite um número:\n");
    scanf("%d", &numero1);
    printf("digite outro número:\n");
    scanf("%d", &numero2);
    
    quociente = numero1 / numero2;
    resto = numero1 % numero2;
    
    printf("\nquociente: %d", quociente);
    printf("\nresto: %d", resto);
    
return 0;
}