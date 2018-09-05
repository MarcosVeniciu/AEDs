#include <stdio.h>
#include <stdlib.h>
#include "TADLivro.h"
#define inicio 0;
#define maximo 100;

typedef struct {
  livro Lista_Livro[100];
  int inicio_lista;
  int Fim_lista;
}Lista;

void Lista_interface();
void lista_vazia(Lista *Lista_vazia);//torna a lista vazia
int Le_lista(Lista *verifica_lista);//verifica se a lista ta ou não vazia
int inserir_lista(Lista *inserir_lista, livro item);//inseri um novo item na lista
int remove_lista(Lista *remove_lista, int posicao, livro *copia);// remove um item da lista
int imprimi_lista (Lista imprimi_livros);
