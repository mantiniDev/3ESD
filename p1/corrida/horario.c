#include "horario.h"
#include <stdlib.h>
#include "corredor.h"

struct horario {
  int hour;
  int min;
  int seg;
  int tempo;
  int punicao;
};

tHorario *tempoCorrida(int hour, int m, int s) {

  tHorario *tem = (tHorario *)malloc(sizeof(tHorario));

  tem->hour = hour * 3600;
  tem->min = m * 60;
  tem->seg = s;
  tem->tempo = (tem->hour) + (tem->min) + (tem->seg);
  return tem;
}

tHorario *tempoPunicao(int pun) {
  tHorario *tem2 = (tHorario *)malloc(sizeof(tHorario));
  tem2->punicao = pun;
  return tem2;
}

int tempoOficial(tHorario* tempo, tHorario* pun){
  int resp;
  return resp = tHorario->tempo + tHorario->punicao;
}