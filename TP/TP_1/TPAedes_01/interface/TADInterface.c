#include "TADInterface.h"


void interface(){
  limpa_tela();
  printf("######################################################################\n");
  printf("#                 DTrabalho Prático 01                               #\n");
  printf("#                                                                    #\n");
  printf("# [a] Inicializar                                                    #\n");
  printf("# [b] Inserir voo                                                    #\n");
  printf("# [c] Remover voo                                                    #\n");
  printf("# [d] Buscar voo                                                     #\n");
  printf("# [e] Sair                                                           #\n");
  printf("######################################################################\n\n");
}

int limpa_tela(){
  #ifdef linux
    system("clear");
  #elif defined WIN32
    system("cls");
  #endif

  return 0;
}
