#include <stdio.h>

int main (void) {
  float price, targetv, value;
  float dolar = 3.17;
  printf("Informe o preco do celular em dolares\n");
  scanf("%f", &price);
  value=(dolar*price);
  targetv=1000.0;
  if (value < targetv)
  	{
  		printf("Bom negocio, preco em reais: %f\n", value);
  	}
  else
	{
		printf("Nao sera um bom negocio, preco em reais: %f\n", value);
	}
  return 0;
}
