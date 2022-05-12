#include <stdlib.h>
#include "lista.h"


struct lista{
  int info;
  struct lista* prox;
};

Lista* list_inserir(Lista* l, int valor)
{
  Lista* novo = (Lista*)malloc(sizeof(Lista));
  novo->info = valor;
  novo->prox = l;
  return novo;
}

Lista* list_remover(Lista* l, int valor)
{
  Lista* anterior = NULL; //elemento anterior
  Lista* p = l; //para percorrer a lista

  /* Procur ao elemento na lista */
  while(p != NULL && p->info != valor)
    {
      anterior = p;
      p = p->prox;
    }

  /* verifica se achou o elemento*/
  if(p == NULL)
    return l; //não achou, retorna a lsita original
  
  /* retira o elemento */
  if(anterior == NULL)
  {
    l = p->prox; 
  }
  else
  {
    anterior->prox = p->prox;
  }

  free(p);
  return l;  
}

void list_exibir(Lista* l)
{
  Lista* p;
  for(p = l;p != NULL; p = p->prox)
    {
      printf("Info = %d\n", p->info);
    }
}

void list_libera(Lista* l)
{
  Lista* p = l;

  while(p != NULL)
    {
      Lista* proximo = p->prox;
      free(p);
      p=proximo; 
    }
}