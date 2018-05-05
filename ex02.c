#include <stdio.h>

int main (void) {
  long num1, num2;
  printf("Informe o primeiro valor!\n");
  scanf("%ld", &num1);
  printf("Informe o segundo valor!\n");
  scanf("%ld", &num2);
  if (num1 > num2)
  {
  	printf("O maior numero é: %ld\n", num1);
  }
  else if (num2 > num1)
  {
        printf("O maior numero é: %ld\n", num2);
  }
  else
  {
       printf("Sao iguais");
  }
  return 0;
}
