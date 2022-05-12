#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
  int min;
  int seg;
} Ttempo;

typedef struct{ //Recorde
  int codModalidade;
  Ttempo tempo;
} Tmodalidade; 

typedef struct{ //dados nadador
  char nome[40];
  Tmodalidade desempenho;  
} Tnadador;

void obtemNadador(Tnadador* nadador)
{
  printf("Nome do Nadador:\n");
  //fflush(stdin);
  //gets(nadador->nome);
  scanf("%s", &nadador->nome);
  printf("Modalidade :\n");
  scanf("%d", &nadador->desempenho.codModalidade);
  printf("Seu desempenho min :\n");
  scanf("%d", &nadador->desempenho.tempo.min);
  printf("Seu desempenho seg :\n");
  scanf("%d", &nadador->desempenho.tempo.seg);
}

int preencheModalidades(Tmodalidade vRecordes[], int n)
{ 
  int i;
  for(i=0;i<n;i++)
  {
    printf("Digite o Codigo da Modalidade:\n");
    scanf("%d", &vRecordes[i].codModalidade);
    printf("Digite os minutos:\n");
    scanf("%d", &vRecordes[i].tempo.min);
    printf("Digite os segundos: \n");
    scanf("%d", &vRecordes[i].tempo.seg);
  }  
  return n; 
}

void exibir(Tmodalidade vRecordes[], int qt)
{
  int i;
  for(i=0; i<qt; i++)
  {
    printf("Modalidade : %d\t", vRecordes[i].codModalidade);
    printf("Minutos: %d\t", vRecordes[i].tempo.min);
    printf("Segundos: %d\t\n", vRecordes[i].tempo.seg);
    printf("\n");
  }
}

int busca(Tmodalidade vRecordes[], int qt, Tnadador nadador)
{
  int i;
  for (i = 0; i < qt; i++)
  {
    if(nadador.desempenho.codModalidade==vRecordes[i].codModalidade)
    {
      return vRecordes[i].codModalidade;
    }
    
  }  
}

void ordenar(Tmodalidade vRecordes[], int qt)
{
  int ini, fim, aux;
  

  for(ini=1; ini<vRecordes->codModalidade; ini++)
  {
    aux=vRecordes[ini].codModalidade;

    for(fim=ini-1; fim>= 0 && vRecordes[fim].codModalidade > aux; fim--)
    {
        vRecordes[fim+1].codModalidade = vRecordes[fim].codModalidade;
    }
    vRecordes[fim+1].codModalidade = aux;
  }
}


int main(void) 
{  
  Tmodalidade vRecordes[5];
  Tnadador nadador;

  int qt =0;
  int i;
  int pos = 0;  

  qt=preencheModalidades(vRecordes,5);
  exibir(vRecordes,qt); 
  
  for(i=0;i<1;i++)
  {
    obtemNadador(&nadador);  // nadador = ObtemNadador()
    pos=busca(vRecordes,qt, nadador);
    if (pos !=-1)
    {
      if (nadador.desempenho.tempo.min <= vRecordes[pos].tempo.min && nadador.desempenho.tempo.seg < vRecordes[pos-1].tempo.seg )
      {
        vRecordes[pos-1].tempo.min=nadador.desempenho.tempo.min;
        vRecordes[pos-1].tempo.seg=nadador.desempenho.tempo.seg; //vRecordes[pos].tempo=nadador.desempenho.tempo 
        printf("\t\nRECORDE ALTERADO\n");                        
      }
      else
      {
        printf("\t\nRECORDE NAO FOI ALTERADO\n");
      }      
    }   
  }
  ordenar(vRecordes,qt);
  exibir(vRecordes,qt);
    
   
  return 0;
}