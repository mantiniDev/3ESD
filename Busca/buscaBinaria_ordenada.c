#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int buscaBinaria(int n, int* vet, int elem)
{
    int i;
    int ini =0;
    int fim= n-1;
    int meio;
    
    while (ini<=fim)
    {
        meio=(ini+fim)/2;
        if(elem<vet[meio])
        {
            fim=meio-1;
        }
        else if (elem>vet[meio])
        {
            ini=meio+1;
        }
        else
        {
            return meio;
        }
    }
    return -1; 
}

int main (void)
{
    int vet[11]={1,2,3,4,5,6,7,8,9,10};
    int elem =0;
    int resp =0; 
    printf("Insira um numero para busca.\n");
    scanf("%d", &elem);
    resp = buscaBinaria(10,vet,elem);
    printf("RESPOSTA: %d ", resp);

    return 0;    
}