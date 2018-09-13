#include "TADPessoa.h"

// typedef struct{
//   char nome[31];
// }TipoPessoa;


typedef struct celula* apontador;

typedef struct celula {
  TipoPessoa usuario;
  apontador proxima_celula;
}TipoCelula;

typedef struct{
  apontador primeiro;
  apontador ultimo;
}TipoLista;


void criar_lista_vazia(TipoLista *Nova_lista);
int verfica_lista_vazia(TipoLista *Nova_lista);
int preencher_lista(TipoLista *lista, char *preenchar_celula);
int remover_lista(TipoLista *lista, char *remover_celula);
void imprimir_lista(TipoLista imprimir_celulas);
