#include "TAD_Pilha.h"



void faz_pilha_vazia(TipoPilha *pilha){
  pilha->primeiro = (TipoCelula*) malloc (sizeof(TipoCelula));
  pilha->primeiro->proxima_celula = NULL;
  pilha->tamanho = 0;
}

int ve_lista_vazia(TipoPilha *pilha){
  if (pilha->primeiro->proxima_celula == NULL) {
    return 1;
  } else {
    return 0;
  }
}

int inserir_iten(TipoPilha *pilha){
  TipoCelula *aux = NULL;

  aux = (TipoCelula*) malloc (sizeof(TipoCelula));
  preencher_pessoa(&(aux->pessoa));
  aux->proxima_celula = pilha->primeiro;
  pilha->primeiro = aux;
  pilha->tamanho++;
  return 0;
}

int remover_iten(TipoPilha *pilha){
  TipoCelula *aux;
  aux = pilha->primeiro;
  pilha->primeiro = aux->proxima_celula;
  free(aux);
  return 0;
}

void emprimi_pilha(TipoPilha *pilha){
  TipoCelula *aux;

  aux= pilha->primeiro;
  printf("Tamanho da pilha: %d\n", pilha->tamanho);
  while (aux->proxima_celula != NULL) {
    printf("Nome: %s\n", aux->pessoa.nome);
    printf("Idade: %d\n",aux->pessoa.idade);
    aux = aux->proxima_celula;
  }
}
