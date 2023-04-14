#include <stdio.h>

int main(){
    float lado1;
    float lado2;
    float lado3;
    float perimetro;

    printf("Informe a medida do lado 1 do triângulo: ");
    scanf("%f", &lado1);
    printf("\nInforme a medida do lado 2 do triângulo: ");
    scanf("%f", &lado2);
    printf("\nInforme a medida do lado 3 do triângulo: ");
    scanf("%f", &lado3);
    
    perimetro = lado1 + lado2 + lado3;
    printf("\nO perímetro do triângulo é: %.2f", perimetro);
    
return 0;
}
