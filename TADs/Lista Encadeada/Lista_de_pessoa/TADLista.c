#include "TADLista.h"


void faz_lista_vazia(TipoLista *lista){
  TipoCelula *aux;

  aux = (struct celula*) malloc (sizeof(TipoCelula));
  aux->proxima_celula = NULL;
  inicializar_nome(&aux->pessoa);
  lista->primeiro = aux;
  lista->ultimo = lista->primeiro;
}

int verifica_lista (TipoLista *lista){
  if (lista->primeiro == lista->ultimo) {
    printf("# A Lista esta Vazia                                       #\n");
  } else {
    printf("# A Lista não esta Vazia                                   #\n");
  }
  return 0;
}

int preenchar_lista (TipoLista *lista, char *nome){
  TipoCelula *aux;

  aux = (struct celula*) malloc (sizeof(TipoCelula));
  inserir_nome(&(aux->pessoa), nome);
  aux->proxima_celula = NULL;
  lista->ultimo->proxima_celula = aux;
  lista->ultimo = aux;
  return 0;
}

int remover_celula  (TipoLista *lista, char *nome){
  TipoCelula *aux = NULL, *copia = NULL;

  aux = lista->primeiro;
  if (lista->primeiro == lista->ultimo) {
    printf("# A Lista esta Vazia                                       #\n");
  } else {
    while (aux->proxima_celula != NULL) {
      if (strcmp(aux->proxima_celula->pessoa.nome, nome)== 0) {
        copia = aux->proxima_celula;
        aux->proxima_celula = copia->proxima_celula;
        if (aux->proxima_celula == NULL) {
          lista->ultimo = aux;
        }
        free(copia);
        copia = NULL;
        break;
      } else {
        aux = aux->proxima_celula;
      }
    }
  }
  return 0;
}

int imprimir_lista  (TipoLista *lista){
  TipoCelula *aux;

  aux = lista->primeiro->proxima_celula;
  if (lista->primeiro == lista->ultimo) {
    printf("# A Lista esta Vazia                                       #\n");
  }else{
    while (aux != NULL) {
      imprimir_nome(&(aux->pessoa));
      aux = aux->proxima_celula;
    }
  }
  return 0;
}
