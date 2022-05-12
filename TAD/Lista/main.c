#include <stdlib.h>
#include "lista.h"


int main(void) {
  Lista* l1;

  list_inserir(l1,1);
  list_inserir(l1,2);
  list_inserir(l1,3);
  list_exibir(l1); 

  
  return 0;
}