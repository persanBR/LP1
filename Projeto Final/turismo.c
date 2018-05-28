#include <stdio.h>
//agencia de turismo, guarda informações preços e destinos dos clientes

struct CadastroViajante {
	char nome[20];
	int idade;
	char paisDestino[20]; //paisOrigem, apenas Brasil
	long dataIda;
	long dataRetorno;
	int hotelRank; //if true hotel 1 2 3 4 5 estrelas
	bool guia;  // if true 3 guias
};

void preenche(struct CadastroViajante* C) {
	printf("Informe o nome:\n");
	scanf((*C).nome);
	printf("Informe a idade:\n");
	scanf(&(*C).idade);
	printf("Informe o pais de destino:\n");
	scanf((*C).paisDestino);
	printf("Informe a data de ida\n");
	scanf(&(*C).dataIda);
	printf("Informe a data de retorno:\n");
	scanf(&(*C).dataRetorno);
	printf("Qualidade do Hotel :\n");
	scanf(&(*C).hotelRank);
	printf("Utiliza guia(S/n)?:\n");
	scanf(&(*C).guia);
}

int main (void) {
	struct CadastroViajante cad;
	preenche(&cad);
	printf ("\nSeu nome: %s\nIdade: %s\nDestino: %d\nIda: %.1f\n\n", cad.nome, cad.idade, cad.paisDestino, cad.dataIda);
	return 0;
}
