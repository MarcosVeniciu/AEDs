#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
  char nome[31];
  int idade;
}TipoPessoa;


void preencher_pessoa(TipoPessoa *pessoa);
