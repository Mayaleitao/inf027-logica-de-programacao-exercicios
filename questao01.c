#include <stdio.h>

int main(){
    float base;
    float altura;
    float area;
    float perimetro;
    
    printf("digite a base: ");
    scanf("%f", &base);
    printf("digite a altura: ");
    scanf("%f", &altura);
    
    area = base * altura;
    perimetro = 2 * (base + altura);
    
    printf("a area do retangulo e: %.2f", area);
    printf("\no perimetro do retangulo é: %.2f", perimetro);
    
return 0;
}