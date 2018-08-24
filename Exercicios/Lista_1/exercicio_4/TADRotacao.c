#include <stdio.h>
#include <stdlib.h>
#include "TADRotacao.h"


void rotacionar(numero *valores, int a, int b, int c) {
  valores->A = b;
  valores->B = c;
  valores->C = a;
}

void inicializar (numero *valor_inicial){
  valor_inicial->A = 0;
  valor_inicial->B = 0;
  valor_inicial->C = 0;
}
void printar(numero printar) {
  printf("A: %d  B: %d   C: %d\n", printar.A, printar.B, printar.C);
}
