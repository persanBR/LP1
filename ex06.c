#include <stdio.h>

int main (void) {
  int i=0;
  int n=0, soma = 0;
  printf("Informe o valor de n: ");
  scanf("%d", &n);
  for (i = 1 ; i <= n ; i=i+1 ) {
    soma = ((soma) + (i*i));
  }
  printf("A soma dos valores e: %d\n", soma);
  return 0;
}
