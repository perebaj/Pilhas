#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"
/*
@Brief, tenho que empilhar minha string, e quando eu encontrar um ' ', desempilhar, fazer isso até chega ao '\0'
 */
int main(){
    
    char *s = "ETSE OICICREXE E OTIUM LICAF";
    // char *s = "ETSE";

    char *aux = (char *)malloc(sizeof(s));
    Pilha *pilha_String = newStack();
    int index_Aux = 0;
    for(int i = 0; i <= strlen(s); i++){
       if(s[i] != ' ' && s[i] != '\0')// se a string nao for um espaço vazio ou o final da string, empilha o carácter
            push(pilha_String,s[i]);
        else{
            while(!emptyStack(pilha_String)){ // enquanto a pilha nao estiver vazia
                aux[index_Aux] = pop(pilha_String);
                index_Aux++;
            }
            aux[index_Aux++] = ' ';
        }
    
    }
    printf("String invertido =>%s \n", aux);
    printf("Tamanho string =>%ld \n", strlen(aux));
 }