#include "class.c"

int main(void){
	char palavra[1024];
	int op;
	
	do{		
		printf("\nEntre com a palavra: ");
	  	scanf("%s", palavra);
		
		int tamPalavra =  strlen(palavra);		
		
		if(palavra[0] == ' '){
			printf("\na palavra eh reconhecida");
		}else if(palavra[0] != 'a'){
			printf("\na palavra nao eh reconhecida");
		}else{
			node* Pilha = (node*) malloc(sizeof(node));
		    criaPilha(Pilha);
		   
		    int i=0;
	 									
			while(palavra[i] == 'a'){
				insereItem(Pilha, 'a');
				i++;	
				//printf("\ninsercao: %i", i);	
			}	
													
			while(palavra[i] == 'b'){		
				removeItem(Pilha);
				i++;	
				//printf("\nremocao: %i", i);	
				if(vazia(Pilha)){							
					if(i == tamPalavra){
						printf("\na palavra eh reconhecida");
						free(Pilha);	
						exit(1);
					}
					break;											
				}	
			}
			printf("\na palavra nao eh reconhecida");
			free(Pilha);
		}
		printf("\n\n[1] - para tentar novamente\n[0] - para sair\nopcao: ");
		scanf("%i", &op);
		system("cls");
	}while(op != 0);
    return 0;
}

