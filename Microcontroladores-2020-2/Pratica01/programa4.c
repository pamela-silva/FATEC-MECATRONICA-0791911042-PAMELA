#include <stdio.h>

int main(void) {
 float numero_real;
 int numero_inteiro;
 char letra;

 printf("informe um valor real:");
 scanf("%f", &numero_real);
 printf("Informe um valor inteiro:");
 scanf("%d", &numero_inteiro);
 printf("Informe uma letra:");
 scanf(" %c", &letra);

 printf("Valor real: %f\n", numero_real);
 printf("Valor inteiro: %d\n", numero_inteiro);
 printf("Letra digitada: %c\n", letra);
 printf("Funciona pfvr! \n");

 
  return 0;
}
