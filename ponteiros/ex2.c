//exercício 5.2

#include <stdio.h>

void compra (int* conta, int valor) {
	*conta = *conta - valor;
}	
int main (void) {
	int conta1, conta2;
	int* conta_a_ser_usada;
	printf ("Informe o saldo da primeira conta: ");
	scanf ("%d", &conta1);	
	printf ("Digite o saldo da segunda conta: ");
	scanf ("%d", &conta2);
	if (conta1 > conta2) {
		conta_a_ser_usada = &conta1;
	}
	else {
		conta_a_ser_usada = &conta2;
	}
	compra(conta_a_ser_usada, 500);
	printf ("O saldo da conta 1 é R$%d e o da conta 2 é R$%d\n", conta1, conta2);
}
