#include <stdio.h>
#include "pilha.h"

int main() {

    Pilha *pilha = newStack();
    push(pilha, '0');
    push(pilha, '1');
    push(pilha, '2');
   printStack(pilha);

}