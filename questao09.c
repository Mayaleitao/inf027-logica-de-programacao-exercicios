#include <stdio.h>

int main(void){
    float raio;
    float altura;
    float volume;
    
    printf("Informe o raio da lata: ");
    scanf("%f", &raio);
    printf("Informe a altura da lata: ");
    scanf("%f", &altura);
    
    volume = 3.14 * (raio * raio) * altura;
    printf("O volume da lata é: %.2fm³", volume);
  
return 0;
}