#include "TADLista.h"

int main(int argc, char const *argv[]) {
  int escolha;
  TipoLista lista;
  char nome[31];
  do {
    #ifdef linux
      system("clear");
    #elif defined WIN32
      system("cls");
    #endif
    printf("###################### Menu Principal ######################\n");
    printf("#                                                          #\n");
    printf("# [1] Iniciar Lista                                        #\n");
    printf("# [2] Verificar Lista                                      #\n");
    printf("# [3] Inserir nome                                         #\n");
    printf("# [4] Remover nome                                         #\n");
    printf("# [5] Imprimir lista                                       #\n");
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
        faz_lista_vazia(&lista);
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
        verifica_lista(&lista);
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
        printf("# Infirme o nome: ");
        scanf(" %[^\n]s", nome);
        preenchar_lista(&lista, &nome[0]);
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
        printf("# Informe nome: ");
        scanf(" %[^\n]s", nome);
        remover_celula(&lista, &nome[0]);
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
        imprimir_lista(&lista);
        printf("#                                                          #\n");
        printf("#   [0] Sair   [1] Menu Principal                          #\n");
        printf("############################################################\n");
        scanf("%d",&escolha);
      break;
    }
  } while(escolha != 0);
  return 0;
}
