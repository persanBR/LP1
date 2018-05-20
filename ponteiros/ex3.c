#include <stdio.h>

void compra (int* conta, int valor) {
	*conta = *conta - valor;
}		
int main (void) {

	int conta1,conta2;
	int* conta;
	int compras[] = {100, 50, 80, 30, 20};
	int x;
	printf ("Informe o saldo da conta 1: R$ ");
	scanf ("%d", &conta1);	
	printf ("Informe o saldo da conta 2: R$ ");
	scanf ("%d", &conta2);
	for (x = 0; x < 5; x++) {
		if (conta1 > conta2) {
			conta = &conta1;
		}
		else {
			conta = &conta2;
		}
	compra(conta, compras[x]);
	printf ("\nSabendo que o valor a ser descontado é: R$ %d\n",compras[x]);
	printf ("O saldo da conta 1 é R$%d e o da conta 2 é R$%d\n", conta1, conta2);
	}
}
