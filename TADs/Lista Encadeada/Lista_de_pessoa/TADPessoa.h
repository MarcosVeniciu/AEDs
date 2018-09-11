#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
  char nome[31];
}TipoPessoa;


void inicializar_pessoa(TipoPessoa *inicializar_nome);
int  preencher_pessoa(TipoPessoa *preencher_nome, char *nome);
int buscar_pessoa(TipoPessoa *buscar_nome, char *nome);
int remover_pessoa(TipoPessoa *remover_nome, char *nome);
void impri_pessoa(TipoPessoa *imprimir_nome);
