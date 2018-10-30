#include "TAD_Pessoa.h"

void preencher_pessoa(TipoPessoa *pessoa){
  printf("Informe o Nome: ");
  scanf(" %[^\n]s", pessoa->nome);
  printf("informe a Idade:");
  scanf("%d", &pessoa->idade);
}
