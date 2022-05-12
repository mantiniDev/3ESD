typedef struct corredor tCorredor;

tCorredor* criarCorredor(int numero, char nome[],int h, int min, int seg, int punicao);

int aplicaPunicao(int numeroCorredor);

tCorredor* maisRapido(int numeroCorredor1, int numeroCorredor2);

void exibir(tCorredor* numeroCorredor);
