#include "corredor.h"
#include <stdlib.h>

struct corredor {
  int numeroCorredor;
  char nome[10];
  int tempo;
  int punicao;
};

tCorredor* criarCorredor(int numero, char nome[], int h, int m, int s, int p) {
  tCorredor *corre = (tCorredor *)malloc(sizeof(tCorredor));
  corre->numeroCorredor = numero;
  corre->nome[10] = nome[10];
  corre->tempo = tempoCorrida(h, m, s,p);
  corre->punicao = p;
}

tCorredor* maisRapido(int numeroCorredor1, int numeroCorredor2)
{  
  int tempoFinalcorredor1 = tempoOficial(tCorredor->tempo,tCorredor->punicao);
  int tempoFinalcorredor2 = tempoOficial(tCorredor->tempo,tCorredor->punicao);

  if(tempoFinalcorredor1 < tempoFinalcorredor2)
  {
    return 1; 
  }
  else
  {
    return 0;
  }  
}

int aplicaPunicao(int numeroCorredor)
{
  tempoOficial(tCorredor->tempo,tCorredor->punicao);
}

void exibir(tCorredor* numeroCorredor)
{
  printf("Corredor:\n (numero: %d\tNome: %s\t Tempo oficial:(%d segundos)\t Punicao: %d\n", tCorredor->numeroCorredor, tCorredor->nome[10], tCorredor->tempo, tCorredor->punicao);
  return 0;
}