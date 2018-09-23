#include "TADPessoa.h"



typedef struct celula {
  TipoPessoa pessoa;
  struct celula *proxima_celula;
}TipoCelula;


typedef struct{
  TipoCelula *topo;
  TipoCelula *base;
  int tamanho_pilha;
}TipoPilha;


void pilha_vazia(TipoPilha *pilha);
int verifica_pilha(TipoPilha *pilha);
int empilhar(TipoPilha *pilha, char *nome);
int desempilhar(TipoPilha *pilha);
int tamanho_pilha(TipoPilha *pilha);
void imprimir_pilha(TipoPilha *pilha);
