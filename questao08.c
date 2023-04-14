#include <stdio.h>

int main(void){
    float tempemCelsius;
    float tempemFahrenheit;

    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f", &tempemFahrenheit);

    tempemCelsius = (tempemFahrenheit - 32) * 5 / 9;
    printf("\nA temperatura em Celsius é: %.2f", tempemCelsius);

return 0;
}