#include <stdio.h>

int main(){
   int numero;
   int sucessor;
   
   printf("digite um numero qualquer: ");
   scanf("%d", &numero);
   
//   numero += 1;
//   numero = numero + 1;
    sucessor = numero + 1;
    
   printf("o sucessor deste numero e:\n %d", sucessor);
    
return 0;
}