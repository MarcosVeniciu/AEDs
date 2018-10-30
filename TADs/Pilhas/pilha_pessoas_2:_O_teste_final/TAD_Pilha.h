#include "TAD_Pessoa.h"

typedef struct celula {
  TipoPessoa pessoa;
  struct celula *proxima_celula;
}TipoCelula;

typedef struct {
  struct celula *primeiro;
  int tamanho;
}TipoPilha;

void faz_pilha_vazia(TipoPilha *pilha);
int ve_lista_vazia(TipoPilha *pilha);
int inserir_iten(TipoPilha *pilha);
int remover_iten(TipoPilha *pilha);
void emprimi_pilha(TipoPilha *pilha);
