#include "ponto.h"
#include  <stdio.h>

struct pto{
  int x,y;
};
 void ptoCria(tPonto* pto, int x, int y){
  
  ptoAtribui(pto,x,y);
  return;
}
void ptoExibe(tPonto* pto){
  printf("(%d,%d)",pto->x,pto->y);
  return;
  
}
int ptoGetX(tPonto pto){
  return pto.x;
  }
int ptoGetY(tPonto pto){
  return pto.y;
}
void ptoSetX(tPonto * pto, int valor){
  pto->x=valor;
}
void ptoSetY(tPonto * pto, int valor){
  pto->y=valor;
}
void ptoAtribui(tPonto * pto, int x, int y){
  ptoSetX(pto,x);
  ptoSetY(pto,y);
  
}
int ptoDistanciaMeu(tPonto pt1, tPonto pt2){
  return ptoGetX(pt1) - ptoGetX(pt2);

}
