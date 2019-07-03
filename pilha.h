typedef struct pilha Pilha;


int emptyStack(Pilha *sRoot);
int fullStack(Pilha *sRoot);
void push(Pilha *sRoot,char new);
char  pop(Pilha *sRoot);
Pilha *newStack();
void printStack(Pilha *sRoot);
