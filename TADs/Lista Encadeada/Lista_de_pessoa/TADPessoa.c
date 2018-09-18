#include "TADPessoa.h"


void inicializar_nome(TipoPessoa *pessoa) {
  pessoa->nome[0] = '\0';
}

int inserir_nome(TipoPessoa *pessoa, char *nome){
  strcpy(pessoa->nome, nome);
  return 0;
}

void imprimir_nome(TipoPessoa *pessoa){
  printf("# Nome: %s\n", pessoa->nome);
}
