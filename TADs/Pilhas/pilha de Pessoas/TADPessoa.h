#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
  char nome[31];
}TipoPessoa;


void inicializar(TipoPessoa *pessoa);
int preenchar_pessoa(TipoPessoa *pessoa, char *nome);
int imprimir_pessoa(TipoPessoa *pessoa);
