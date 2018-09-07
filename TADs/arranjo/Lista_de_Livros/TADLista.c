#include <stdio.h>
#include <stdlib.h>
#include "TADLista.h"

/*
typedef struct {
  livro Lista_Livro[100];
  int inicio_lista, Fim_lista;
}Lista;
*/

void Lista_interface(){
  printf("######################################## Lista de Livros #########################################\n");
  printf("#                                 O que voce deseja escolher?                                    #\n");
  printf("# [1] Resetar a lista.                                                                           #\n");
  printf("# [2] Checar se a lista esta vazia.                                                              #\n");
  printf("# [3] Inserir dados na lista.                                                                    #\n");
  printf("# [4] Retirar dados da lista.                                                                    #\n");
  printf("# [5] Imprimir a lista.                                                                          #\n");
  printf("##################################################################################################\n");
}
void lista_vazia(Lista *Lista_vazia){ //torna a lista vazia
  Lista_vazia->inicio_lista = inicio;
  Lista_vazia->Fim_lista = inicio;

}
int Le_lista(Lista *verifica_lista){//verifica se a lista ta ou não vazia
  if (verifica_lista->inicio_lista == verifica_lista->Fim_lista) {
    printf("A Lista está vazia\n");
  }
  else{
    printf("A Lista não esta vazia\n");
  }

  return 0;
}
int inserir_lista(Lista *inserir_lista, livro item){//inseri um novo item na lista
  if (inserir_lista->Fim_lista == 100) {
    printf("Lista cheia!!\n");
  } else {
    inserir_lista->Lista_Livro[inserir_lista->Fim_lista] = item;
    inserir_lista->Fim_lista++;
  }


  return 0;
}
int remove_lista(Lista *remove_lista, int posicao, livro *copia){// remove um item da lista
  int cont;
  if ((remove_lista->Fim_lista == 100)|| posicao >= remove_lista->Fim_lista || posicao < 0) {
    return 0;
  } else {
    *copia = remove_lista->Lista_Livro[posicao];
    remove_lista->Fim_lista--;
    for (cont = posicao+1; cont <= remove_lista->Fim_lista; cont++) {
      remove_lista->Lista_Livro[cont-1] = remove_lista->Lista_Livro[cont];
    }

  }

  return 0;
}
int imprimi_lista (Lista imprimi_livros){
  int i;
  for (i = imprimi_livros.inicio_lista; i< imprimi_livros.Fim_lista; i++ ) {
    printf("Nome: %s\n", imprimi_livros.Lista_Livro[i].nome);
    printf("Ediçao: %d\n", imprimi_livros.Lista_Livro[i].edicao);
    printf("Ediçao: %d\n", imprimi_livros.Lista_Livro[i].ano);
  }
  return 0;
}
