#include <string.h>
#include "TADLista.h"


int faz_lista_vazia( lista *zerar_lista){
  zerar_lista->primeiro = inicio;
  zerar_lista->ultimo = inicio;
  return 0;
}

int verifica (lista *situacao_lista){
  if (situacao_lista->primeiro == situacao_lista->ultimo) {
    printf("A lista esta vaizia\n");
  }
  else{
    printf("A lista não esta vaizia\n");
  }
  return 0;
}

int inseri(lista *inseri_lista){
  char nome[31];

  if ((inseri_lista->ultimo >= inicio) & (inseri_lista->ultimo <= maximo)) {
    printf("Nome:");
    scanf(" %[^\n]s", nome);
    strcpy (inseri_lista->Lista_pessoa[inseri_lista->ultimo].nome, nome);
    inseri_lista->ultimo++;
  }
  return 0;
}

int remover(lista *remove_lista){
  int posicao, i;

  printf("Qual posicao quer remover: ");
  scanf("%d", &posicao);
  for (i = posicao; i <= maximo; i++) {
    strcpy (remove_lista->Lista_pessoa[i].nome, remove_lista->Lista_pessoa[i+1].nome);
  }
  remove_lista->ultimo--;

  return 0;
}

void imprimi(lista imprimir_lista){
  int i;

  printf("##################################################\n");
  printf("#                     Resultado                   \n");
  printf("#\n");
  for (i = imprimir_lista.primeiro; i < imprimir_lista.ultimo; i++) {
    printf("#[%d]Nome: %s\n", (i+1), imprimir_lista.Lista_pessoa[i].nome);
    printf("#\n");
  }
}


void interface(){
  // Windows: system("cls");
  printf("##################################################\n");
  printf("#[1] Limpar Lista                                #\n");
  printf("#[2] Verificar Lista                             #\n");
  printf("#[3] Inserir Nome                                #\n");
  printf("#[4] Remover Nome                                #\n");
  printf("#[5] Imprimir Lista                              #\n");
  printf("#[6] Sair                                        #\n");
  printf("##################################################\n");
}
