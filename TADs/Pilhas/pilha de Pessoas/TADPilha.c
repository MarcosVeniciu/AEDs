#include "TADPilha.h"




void pilha_vazia(TipoPilha *pilha){
  pilha->topo = (struct celula *) malloc (sizeof(TipoCelula));
  pilha->base = pilha->topo;
  pilha->base->proxima_celula = NULL;
  inicializar(&(pilha->base->pessoa));
  pilha->tamanho_pilha = 0;
}

int verifica_pilha(TipoPilha *pilha){
  if (pilha->topo == pilha->base) {
    return 1;
  } else {
    return 0;
  }
}

int empilhar(TipoPilha *pilha, char *nome){
  TipoCelula *aux = NULL;
  aux = (struct celula *) malloc (sizeof(TipoCelula));
  preenchar_pessoa(&(aux->pessoa), nome);
  aux->proxima_celula = pilha->topo;
  pilha->topo = aux;
  pilha->tamanho_pilha++;
  return 0;
}

int desempilhar(TipoPilha *pilha){
  TipoCelula *aux = NULL;

  aux = pilha->topo;
  while (aux != pilha->base){
    pilha->topo = aux->proxima_celula;
    pilha->tamanho_pilha--;
    free(aux);
    break;
  }
  return 0;
}

int tamanho_pilha(TipoPilha *pilha){
  return pilha->tamanho_pilha;
}

void imprimir_pilha(TipoPilha *pilha) {
  TipoCelula *aux;

  aux= pilha->topo;
  while (aux != pilha->base){
    imprimir_pessoa(&(aux->pessoa));
    aux = aux->proxima_celula;
  }
}
