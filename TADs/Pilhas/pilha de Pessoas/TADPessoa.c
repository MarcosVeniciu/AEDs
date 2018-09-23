#include "TADPessoa.h"

void inicializar(TipoPessoa *pessoa){
  pessoa->nome[0] = '\0';
}

int preenchar_pessoa(TipoPessoa *pessoa, char *nome){
  strcpy(pessoa->nome, nome);
  return 0;
}

int imprimir_pessoa(TipoPessoa *pessoa){
  // printf("#####################################################\n");

  printf("# Nome: %s\n", pessoa->nome);
  return 0;
}
