#include <stdlib.h>
#include "circulo.h"

#define PI 3.14159


struct Circulo
{
    int x;
    int y;
    int r;
}; 

//cria o circulo, dando duas coordenadas e o raio
tcirculo* cirCriar(int x, int y, int r)
{
    tcirculo* circ = (tcirculo*)malloc(sizeof(tcirculo));  
    
    circ->x=x;
    circ->y=y;
    circ->r=r;
    
    return circ;
}

//exibe o ponto e o raio do circulo
void cirExibir(tcirculo*circ)
{
    printf("\nPonto: %d %d\t Raio: %d\n", circ->x,circ->y,circ->r);
    return;
}
//determina a área do circulo
int cirArea(tcirculo*circ)
{
    return PI*circ->r*circ->r;
}

//determina o diametro de um circulo
int cirDiametro(tcirculo*circ)
{
    return 2*circ->r;
}

//determina o comprimento circunferencia de um circulo)
int cirCircunferencia(tcirculo*circ)
{
    return (2*PI)*circ->r;
}

//determina se dois circulos são iguais
int cirCompara(tcirculo*circ1, tcirculo*circ2)
{
    int resp;
    if (circ1->r == circ2->r && circ1->r == circ2->r && circ1->x == circ2->x && circ1->y == circ2->y)
    {
        printf("Os circulos são iguais");
    }
    else
    {
        printf("Os circulos são diferentes");
    }
    
}