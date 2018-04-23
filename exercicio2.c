#include <stdio.h>
#include <stdlib.h>

typedef struct lista Lista;

struct lista
{
	char nome[81];
	float nota;
	Lista* prox;
};

Lista* criaLista(void)
{
	return NULL;
}

int aprovados(Lista* lst)
{
	int aprov = 0;
	Lista* ponteiro;

	for(ponteiro = lst; ponteiro!= NULL; ponteiro = ponteiro->prox)
	{
		if(ponteiro->nota >= 5)
			aprov++;
	}

	return aprov;
}

Lista* insereElement(Lista* lst, char *name, float nota)
{
	Lista* novoElemento = (Lista*) malloc(sizeof(Lista));
	novoElemento->nome = name;
	novoElemento->nota = nota;
	novoElemento->prox = lst;

	return novoElemento;
}

/*int main (void)
{
	Lista* lst;
	lst = criaLista();

	lst = insereElement(lst, "ZE",  5.5);
	lst = insereElement(lst, "JON", 6.0);
	lst = insereElement(lst, "FULANO", 4.0); 

	aprovados(lst);

	return 0;
}*/	