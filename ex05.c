#include <stdio.h>

int main (void) {
  int soma = 0;
  int num;
  while (num != 0) {
    printf("Escolha um numero: ");
    scanf("%d", &num);
    soma = (soma + num);
  }
  printf("A soma dos valores e: %d\n", soma);
  return 0;
}
