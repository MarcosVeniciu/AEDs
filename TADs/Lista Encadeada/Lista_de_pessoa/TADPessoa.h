#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nome[31];
}TipoPessoa;


void inicializar_nome(TipoPessoa *pessoa);
int inserir_nome(TipoPessoa *pessoa, char *nome);
void imprimir_nome(TipoPessoa *pessoa);
