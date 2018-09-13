#include "TADLista.h"


void criar_lista_vazia(TipoLista *Nova_lista){
  Nova_lista->primeiro = (celula*)malloc(sizeof(TipoCelula));
  Nova_lista->ultimo = Nova_lista->primeiro;
}

int verfica_lista_vazia(TipoLista *Nova_lista){
  if (Nova_lista->primeiro == Nova_lista->ultimo) {
    printf("A Lista esta vazia\n");
  } else {
    printf("A Lista não esta vazia\n");
  }
  return 0;
}

// iseri no final da lista (parece ser mais facil)
int preencher_lista(TipoLista *lista, TipoPessoa *preenchar_celula){
  lista->ultimo = (celula*)malloc(sizeof(TipoCelula));
  lista->ultimo->usuario = *preenchar_celula;
  lista->ultimo->proxima_celula = NULL;
  return 0;
}

int remover_lista(TipoLista *lista, char *remover_celula){
  TipoCelula *aux, *copia;
  int igual;

  aux = lista->primeiro;
  if (lista->primeiro == lista->ultimo) {
    printf("lista esta vazia\n");
  } else {
    while (aux->proxima_celula != NULL) {
      igual = strcmp(aux->usuario.nome, remover_celula);
      if (igual == 0) {
        copia = aux->proxima_celula;
        aux = aux->proxima_celula->proxima_celula;
        if (aux->proxima_celula == NULL) {
          lista->ultimo = aux;
        }
        free(copia);
      } else {
        aux = aux->proxima_celula;
      }
    }
  }
  return 0;
}
void imprimir_lista(TipoLista imprimir_celulas){
  
}
