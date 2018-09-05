#include <stdio.h>
#include <stdlib.h>
#include "TADLista.h"


int main(int argc, char const *argv[]) {
  int loop=0, escolha, posicao_1;
  livro livros, livro_2;
  Lista lista_1;
  // char nome[21];

  lista_vazia(&lista_1);
  iniciar_livro(&livros);

  while (loop==0){
    Lista_interface();
    scanf("%d", &escolha);
    switch (escolha) {
      case 1:
        lista_vazia(&lista_1);
      break;
      case 2:
        Le_lista(&lista_1);
      break;
      case 3:
        printf("Nome: ");
        scanf(" %[^\n]s", livro_2.nome);
        printf("\nEdição: ");
        scanf("%d", &livro_2.edicao);
        printf("\nAno: ");
        scanf("%d", &livro_2.ano);
        inserir_lista(&lista_1, livro_2);
      break;
      case 4:
        printf("Qual posiçao que remover:");
        scanf("%d", &posicao_1);
        remove_lista(&lista_1, posicao_1, &livro_2);
      break;
      case 5:
        imprimi_lista (lista_1);
      break;
      case 6:
        system("clear");
      break;
      case 7:
        system("cls");
      break;
    }
  }
  return 0;
}
