##include <stdlib.h>
#include "circulo.h"

int main (void)
{
    tcirculo* circ1;
    tcirculo* circ2;

    circ1 = cirCriar(2,3,6);

    circ2 = cirCriar(2,5,8);

    cirExibir(circ1);

    cirExibir(circ2);

    printf("\nArea: %d\n", cirArea(circ1));

    //cirArea(circ2);

    printf("Diametro: %d\n",cirDiametro(circ1));

    //cirDiametro(circ2);

    printf("Circunferencia: %d\n",cirCircunferencia(circ1));

    //cirCircunferencia(circ2);

    cirCompara(circ1,circ2);

    return 0;

}