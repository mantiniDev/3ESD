typedef struct pto tPonto;
void ptoCria(tPonto* p,int x, int y);
void ptoExibe(tPonto*pto);
int ptoGetX(tPonto pto);
int ptoGetY(tPonto pto);
void ptoSetX(tPonto * pto, int valor);
void ptoSetY(tPonto * pto, int valor);
void ptoAtribui(tPonto * pto, int x, int y);
int ptoDistancia(tPonto pt1, tPonto pt2);
