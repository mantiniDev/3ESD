#include "horario.h"
#include <stdlib.h>
#include "corredor.h"

int main(void) 
{
  int numCorredor;
  char nome[10];
  int hour, m, s;
  int punicao;
  
  printf("Vamos criar um corredor:\n");
  scanf("%d",&numCorredor);
  printf("Nome do Corredor:\n");
  scanf("%s", &nome[10]);
  printf("Tempo da corrida: h , m e seg\n");
  scanf("%d %d %d", &hour, &m, &s);
  printf("Punicao: \n");
  

  printf();
  criarCorredor(numCorredor, nome[10],hour,m,s,punicao);
  
  return 0;
}