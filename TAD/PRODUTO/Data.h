#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Representação do TAD: TData
//-----------
// Interface
//-----------

typedef struct data tData;

/* Funções exportadas */
/* Função cria - Aloca e retorna uma data dia/mês/ano */
tData* dta_cria(int dia, int mes, int ano);

/* Função libera – Libera  memória de uma Data criada */
void dta_libera(tData* p);

/* Função acessa - Retorna os valores de uma Data */
void dta_acessa(tData* p, int* dia, int* mes, int* ano);

/* Função atribui - Atribui novos valores à Data */
void dta_atribui(tData* p, int dia, int mes, int ano);

/* Função Intervalo - Retorna a data após X dias */
tData* dta_intervalo(tData* p1, int X);

/* Função Exibe – Escreve na tela a data  no formato dd/mm/aaaa */
tData* dta_exibe(tData* p1);

/* Função getData - Retorna uma string com os valores da data no formato dd/mm/aaaa*/
char* dta_getData(tData* p);

/* Função maiorIgual - Recebe duas datas e retorna 1 se a dta1 for maior ou igual a data 2  ou 0 caso contrário
12/10/2022 é maior ou igual a 12/09/2022
*/
int dta_maiorIgual(tData* p1, tData* p2);

/* Função dta_MesExtensol - Recebe uma data e retorna o mês da data por extenso*/
char* dta_MesExtenso(tData*p);