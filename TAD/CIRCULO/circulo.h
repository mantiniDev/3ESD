//Construa o TAD Círculo  que ao ser criado, recebe um ponto (centro) e um valor inteiro (raio).
//Deve ter pelo menos as funções básicas ( criar, exibir, alterar e consultar atributos) e uma função de manipulação e 2 círculos ( por ex; compara se o circ1 < circ2 de acordo com algum critério tipo centro mais próximo da origem ou área menor...)
//Os arquivos Circulo.c, Circulo.h e uma main com teste de cada função ofertada pelo TAD devem ser enviados.  O arquivo da main deve ter nome do aluno como comentário. Envie também se possível, o link do replit da solução

typedef  struct Circulo tcirculo; 

tcirculo* cirCriar(int x, int y, int r);//cria o circulo, dando duas coordenadas e o raio

void cirExibir(tcirculo*circ);//exibe o ponto e o raio do circulo

int cirArea(tcirculo*circ); //determina a área do circulo

int cirDiametro(tcirculo*circ); //determina o diametro de um circulo

int cirCircunferencia(tcirculo*circ); //determina a circunferencia do circulo)

int cirCompara(tcirculo*circ1, tcirculo*circ2); //determina se dois circulos são iguais