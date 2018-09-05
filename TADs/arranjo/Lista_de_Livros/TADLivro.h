#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
  char nome[21];
  int edicao;
  int ano;
}livro;

int iniciar_livro(livro *iniciar_livro);
int preencher_livro(livro *preencher_livro, char *nome_livro, int edicao_livro, int ano_livro); // ficou inutil preenche pela lista
int imprimir(livro imprimir_livro);//ficou inutil imprimi pela lista
