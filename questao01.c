#include <stdio.h>

int main(){
    float base;
    float altura;
    float area;
    float perimetro;
    
    printf("digite a base:\n");
    scanf("%f", &base);
    printf("digite a altura:\n");
    scanf("%f", &altura);
    
    area = base * altura;
    perimetro = 2 * (base + altura);
    printf("%.2f %.2f", area, perimetro);
    
    return 0;
}