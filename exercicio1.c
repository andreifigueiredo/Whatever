#include <stdio.h>
#include <stdlib.h>


typedef struct lista Lista;
struct lista
{
	char* str;
	Lista* prox;
};

Lista* criaLista(void)
{
	return NULL;
}

Lista* retira(Lista* lst, char* element)
{
	Lista* ponteiro;
	Lista* ant;

	for(ponteiro = lst; ponteiro != NULL; ponteiro = ponteiro->prox)
	{
		ant = ponteiro;
		if(ponteiro->str == element)
			{
				printf("ELEMENTO REMOVIDO \n");
				if(ant == NULL)
					lst = ponteiro->prox;
				else
					ant->prox = ponteiro->prox;

				free(ponteiro);	
			}
	}

	return lst;
}

Lista* insereElement(Lista* lst, char* str)
{
	Lista* novoElemento = (Lista*) malloc(sizeof(Lista));
	str = (char*) malloc(sizeof(char));
	novoElemento->str = str;
	novoElemento->prox = lst;

	return novoElemento;
}

/*int main (void)
{
	Lista* lst;
	char* str1;
	char* str2;
	char* str3;
	lst = criaLista();

	lst = insereElement(lst, str1);
	lst = insereElement(lst, str2);
	lst = insereElement(lst, str3); 

	retira(lst, str2);

	return 0;
}*/