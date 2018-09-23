#include "TADPilha.h"

int main(int argc, char const *argv[]) {
  int escolha;
  TipoPilha pilha;
  char nome[31];
  do {
    #ifdef linux
      system("clear");
    #elif defined WIN32
      system("cls");
    #endif
    printf("###################### Menu Principal ######################\n");
    printf("#                                                          #\n");
    printf("# [1] Iniciar Pilha                                        #\n");
    printf("# [2] Verificar pilha                                      #\n");
    printf("# [3] Inserir nome                                         #\n");
    printf("# [4] Remover nome                                         #\n");
    printf("# [5] Imprimir pilha                                       #\n");
    printf("# [0] Sair                                                 #\n");
    printf("#                                                          #\n");
    printf("############################################################\n");
    printf("# Opção: ");
    scanf("%d",&escolha);
    switch (escolha) {
      case 1:
        #ifdef linux
          system("clear");
        #elif defined WIN32
          system("cls");
        #endif
        printf("###################### Iniciar Lista #######################\n");
        printf("#                                                          #\n");
        pilha_vazia(&pilha);
        printf("# Lista iniciarda com sucesso!!                            #\n");
        printf("#                                                          #\n");
        printf("#   [0] Sair   [1] Menu Principal                          #\n");
        printf("############################################################\n");
        scanf("%d",&escolha);
      break;
      case 2:
        #ifdef linux
          system("clear");
        #elif defined WIN32
          system("cls");
        #endif
        printf("##################### Verificar Lista ######################\n");
        printf("#                                                          #\n");
        if (verifica_pilha(&pilha)) {
          printf("# Pilha Vazia                                              #\n");
        } else {
          printf("# Pilha não esta Vazia                                     #\n");
        }
        printf("#                                                          #\n");
        printf("#   [0] Sair   [1] Menu Principal                          #\n");
        printf("############################################################\n");
        scanf("%d",&escolha);
      break;
      case 3:
        #ifdef linux
          system("clear");
        #elif defined WIN32
          system("cls");
        #endif
        printf("###################### Incerir Nome ########################\n");
        printf("#                                                          #\n");
        printf("# Informe o nome: ");
        scanf(" %[^\n]s", nome);
        empilhar(&pilha, &nome[0]);
        printf("#                                                          #\n");
        printf("#   [0] Sair   [1] Menu Principal                          #\n");
        printf("############################################################\n");
        scanf("%d",&escolha);
      break;
      case 4:
        #ifdef linux
          system("clear");
        #elif defined WIN32
          system("cls");
        #endif
        printf("###################### Remover Nome ########################\n");
        printf("#                                                          #\n");
        desempilhar(&pilha);
        printf("#                                                          #\n");
        printf("#   [0] Sair   [1] Menu Principal                          #\n");
        printf("############################################################\n");
        scanf("%d",&escolha);
      break;
      case 5:
        #ifdef linux
          system("clear");
        #elif defined WIN32
          system("cls");
        #endif
        printf("###################### Imprimir Lista ######################\n");
        printf("#                                                          #\n");
        printf("# Tamanho Pilha: %d\n", tamanho_pilha(&pilha));
        imprimir_pilha(&pilha);
        printf("#                                                          #\n");
        printf("#   [0] Sair   [1] Menu Principal                          #\n");
        printf("############################################################\n");
        scanf("%d",&escolha);
      break;
    }
  } while(escolha != 0);
  return 0;
}
