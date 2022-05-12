#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "produto.h"
#include "Data.h"

int main (void) {   
	Tproduto* p1; = prod_criar();

	prod_exibir(p1);
	
	free(p1);

	return 0; 

}

