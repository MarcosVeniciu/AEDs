#include <stdio.h>
#include <stdlib.h>
#include "TADPessoa.h"
#define inicio  0
#define maximo  100

typedef struct{
  pessoa Lista_pessoa[maximo];
  int primeiro;
  int ultimo;
}lista;


int faz_lista_vazia( lista *zerar_lista);
int verifica (lista *situacao_lista);
int inseri(lista *inseri_lista);
int remover(lista *remove_lista);
void imprimi(lista imprimir_lista);
void interface();
