#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TADLivro.h"


int iniciar_livro(livro *iniciar_livro){
  iniciar_livro->nome[0] = '\0';
  iniciar_livro->edicao  = 0;
  iniciar_livro->ano     = 0;

  return 0;
}
int preencher_livro(livro *preencher_livro, char nome_livro[], int edicao_livro, int ano_livro){
  strcpy (preencher_livro->nome, nome_livro);
  preencher_livro->edicao = edicao_livro;
  preencher_livro->ano = ano_livro;

  return 0;
}
int imprimir(livro imprimir_livro){
  printf("Nome: %s\n", imprimir_livro.nome);
  printf("Edição: %d\n", imprimir_livro.edicao );
  printf("Ano: %d\n", imprimir_livro.ano);

  return 0;
}
