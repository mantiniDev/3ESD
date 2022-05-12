#include <stdio.h>

#include "ponto.h"

int main(void) {
  tPonto p1,p2;
 ptoCria(&p1,2,3);
  ptoCria(&p2,3,4);
  ptoExibe(&p1);
  return 0;
}