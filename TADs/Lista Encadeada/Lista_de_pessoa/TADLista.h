#include "TADPessoa.h"


typedef struct celula {
  TipoPessoa pessoa;
  struct celula *proxima_celula;
}TipoCelula;

typedef struct {
  struct celula *primeiro;
  struct celula *ultimo;
}TipoLista;

void faz_lista_vazia(TipoLista *lista);
int preenchar_lista (TipoLista *lista, char *nome);
int remover_celula  (TipoLista *lista, char *nome);
int imprimir_lista  (TipoLista *lista);
int verifica_lista (TipoLista *lista);
