#include <stdio.h>
#include <stdlib.h>
#include "TADZerar.h"



void inicializar(numero *inicializar) {
  inicializar->A = 0;
  inicializar->B = 0;
}
void zerar (numero *zerar){
  zerar->A = 0;
  zerar->B = 0;
}
void preencher (numero *preencher, int a, int b){
  preencher->A = a;
  preencher->B = b;
  printf("old  :  A: %d   B: %d\n", preencher->A, preencher->B);
}
void imprmir(numero imprimir){
  printf("Novo :  A: %d   B: %d\n", imprimir.A, imprimir.B);
}
