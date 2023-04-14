#include <stdio.h>

int main(){
    float raio;
    float area;
    float perimetro;
    
    printf("digite o tamanho do raio da circunferencia: ");
    scanf("%f", &raio);
        
    area = 3.14 * (raio * raio);
    perimetro = 2 * 3.14 * raio;
    
    printf("A área da circunferencia é: %.2f", area);
    printf("\nO perímetro da circunferencia é: %.2f", perimetro);
    
return 0;
}