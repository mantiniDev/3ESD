typedef struct produto Tproduto;

// cria o produto
Tproduto* prod_criar();

//exibe o produto
void prod_exibir(Tproduto* a);

//verifica a validade do produto
int prod_estValidade(Tproduto* a, int dia, int mes, int ano);


//verifica se Ã© semelhante
int prod_ehSemelhante(Tproduto* a, Tproduto* b);

//reajusta o vlaor
void prod_reajuste(Tproduto* preco, int percentual);

//obtem um produto
void prod_get(Tproduto* a);

//define um produto
void prod_set(Tproduto* a);

//se os produtos tem o memso atributo
int prod_igualProduto(Tproduto* a, Tproduto* b);