#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int buscar_ord(int n, int* vet, int elem)
{
    int i;
    for (i=0; i<n; i++)
    {
        if(elem == vet[i])
        {
            return i;
        }
        else if (elem<vet[i])
        {
            return -1;
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
    resp = buscar_ord(10,vet,elem);
    printf("RESPOSTA: %d ", resp);

    return 0;    
}
