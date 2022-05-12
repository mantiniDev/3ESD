#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "Data.h"
#include "produto.h"

struct produto {
	char identificacao[30];
	char codigoBarras[10];
	tData *datFabricacao;
	int validade;
	float preco;  
};

void prod_exibir(Tproduto* p) {
	printf("\n\nProduto: ");
	printf("%s", p->identificacao);
	printf("\nCodigo de Barras: ");
	printf("%s", p->codigoBarras);
	printf("\nData Fabricacao: ");
	dta_exibe(p->datFabricacao);
	printf("\nPreco: ");
  printf("%0.2f", p->preco);
}

Tproduto* prod_criar() {
	Tproduto *prod = (Tproduto*) malloc(sizeof(Tproduto));
	int dia, mes, ano;

	printf("Definia o produto:\n");
	scanf("%s", prod->identificacao);

	printf("Preencher o codigo de barras:\n");
	scanf("%s", prod->codigoBarras);

	printf("Preencher a data de fabricaÃ§Ã£o:\n");
	printf("Dia: ");
	scanf("%d", &dia);
	printf("Mes: ");
	scanf("%d", &mes);
	printf("Ano: ");
	scanf("%d", &ano);

	prod->datFabricacao = dta_cria(dia, mes, ano);       

	printf("Preencher prazo apra validade:\n");
	scanf("%d", &prod->validade);

	printf("Preencher o valor do Produto: \n");
	scanf("%f", &prod->preco);      

	return prod;
}
