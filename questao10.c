// Converter um inteiro informado menor que 256 (32) para sua representação em binário.

#include <stdio.h>

int main(void){
    int numInteiro;
    int repBinario;
	int q128;
	int q64;
	int q32;
	int q16;
	int q8;
	int q4;
	int q2;
	int q1;
        
    printf("Informe um número inteiro (até 255): ");
    scanf("%d", &numInteiro);
    
    q128 = (numInteiro / 128);
	numInteiro = (numInteiro % 128);
	q64 = (numInteiro / 64);
	numInteiro = (numInteiro % 64);
	q32 = (numInteiro / 32);
	numInteiro = (numInteiro % 32);
	q16 = (numInteiro / 16);
	numInteiro = (numInteiro % 16);
	q8 =  (numInteiro / 8);
	numInteiro = (numInteiro % 8);
	q4 =  (numInteiro / 4);
	numInteiro = (numInteiro % 4);
	q2 =  (numInteiro / 2);
	numInteiro = (numInteiro % 2);
	q1 =  (numInteiro / 1);
	repBinario = (q128 * 10000000 + q64 * 1000000 + q32 * 100000 + q16 * 10000 + q8 * 1000 + q4 * 100 + q2 * 10 + q1);
    
    printf("A representação deste número em binário é: %d", repBinario);
  
return 0;
}