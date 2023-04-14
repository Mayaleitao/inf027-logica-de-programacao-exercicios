#include <stdio.h>

int main(){
    float lado;
    float area;
    float perimetro;
    
    printf("digite o tamanho do lado do quadrado: ");
    scanf("%f", &lado);
        
    area = lado * lado ;
    perimetro = lado * 4;
    
    printf("a area do quadrado e: %.2f", area);
    printf("\no perimetro do quadrado é: %.2f", perimetro);
    
return 0;
}