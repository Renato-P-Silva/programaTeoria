#include "head.h"

int diferente(char valor){
	if((valor != 'a') & (valor != 'b')){  
		return 0;      	
    }    
}

int vazia(node* Pilha){
    if(Pilha->prox == NULL)
        return 1;
    else
        return 0;
}

void criaPilha(node* Pilha){
    Pilha->prox = NULL;
}

void insereItem(node* Pilha, char caract){
    node* novoItem = (node*) malloc(sizeof(node));
    if(!novoItem){
        printf("\nNao ha memoria suficiente!");
        exit(1);
    }
    else{
        novoItem->caracter = caract;
        node* velhoComeco = Pilha->prox;
        Pilha->prox = novoItem;
        novoItem->prox = velhoComeco;
    }
}

void removeItem(node* Pilha){
    if(!vazia(Pilha)){
        node* tmp = Pilha->prox;
        Pilha->prox = tmp->prox;
        free(tmp);
    }else{
    	printf("\nA Pilha esta vazia!");	
	}
}

