#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"

#define TAM 100

typedef struct pilha{
    int topo;// Topo da pilha 
    char content[TAM]; // Conteudo da pilha
}Pilha;

/*
@brief : retorna 1 se topo for menor ou igual a zero(caso em que a pilha é vazia)
 */
int emptyStack(Pilha *sRoot){
    return (sRoot->topo) <= 0;
}
/*
@Brief verifica se a pilha está cheia
    retorna 1 se cheia
    retorna 0 se não está cheira
 */
int fullStack(Pilha *sRoot){
    if(sRoot->topo == TAM-1)
        return 1;//pilha cheia
    return 0;//Pilha nao cheia
}
/*
@Brief  insere um novo elemento no topo da pilha se ela n estiver cheia
 */
void push(Pilha *sRoot,char new){
    if( !(fullStack(sRoot)) ){// se a pilha não estiver cheia
        sRoot->content[(sRoot->topo)] = new;
        sRoot->topo++;
    }
    
        
}
/*
@brief desempilha
 */
char  pop(Pilha *sRoot){
    if(!( emptyStack(sRoot)) )// se pilha nao estiver vazia
        return sRoot->content[ --(sRoot->topo) ];

        

}
/*Brief Cria uma nova pilha e retorna uma pilha com memória alocada do tamanhoa de uma pilha
@
 */
Pilha *newStack(){
    Pilha *pilha = (Pilha *)malloc(sizeof(Pilha));
    pilha->topo = 0;
    return pilha;
}
/*
@Brief imprime a pilha do topo para a base
 */
void printStack(Pilha *sRoot){
    for(int i = sRoot->topo-1; i >= 0; i--)
        printf("%c \n", sRoot->content[i]);
    // printf("\n");
}
