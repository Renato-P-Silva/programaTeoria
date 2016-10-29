#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Node{
    char caracter;
    struct Node* prox;
};
typedef struct Node node;

////Protótipos
int vazia(node* Pilha);
void criaPilha(node* Pilha);
void insereItem(node* Pilha, char caract);
void removeItem(node* Pilha);
