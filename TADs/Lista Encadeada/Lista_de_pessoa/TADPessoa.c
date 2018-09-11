#include "TADPessoa.h"


void inicializar_pessoa(TipoPessoa *inicializar_nome){
  inicializar_nome->nome[0] = '\0';
}

int  preencher_pessoa(TipoPessoa *preencher_nome, char *nome){
  strcpy (preencher_nome->nome, nome);
  return 0;
}

int buscar_pessoa(TipoPessoa *buscar_nome, char *nome){


  return 0;
}
int remover_pessoa(TipoPessoa *remover_nome, char *nome);
void impri_pessoa(TipoPessoa *imprimir_nome);
