#include <stdio.h>
#include <stdlib.h>
#include "TADLista.h"


int main(int argc, char const *argv[]) {
  lista lista_1;
  int i=0, j, escolha;
  for (j = inicio; j < maximo; j++) {
    iniciar_pessoa(&lista_1.Lista_pessoa[i]);
    faz_lista_vazia(&lista_1);
  }
  interface();
  while (i<=1) {
    scanf("%d", &escolha);
    getchar();
    interface();
    system("clear");
    switch (escolha) {
      case 1:
        faz_lista_vazia(&lista_1);
      break;
      case 2:
        verifica (&lista_1);
      break;
      case 3:
        inseri(&lista_1);
      break;
      case 4:
        remover(&lista_1);
      break;
      case 5:
        imprimi(lista_1);
      break;
      case 6:
        i=2;
      break;
    }
  }
  return 0;
}
