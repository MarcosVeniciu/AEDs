#include <stdio.h>
#include <stdlib.h>
#include "TADRotacao.h"

int main(int argc, char const *argv[]) {
  numero valor;
  int A, B, C;

  inicializar (&valor);

  printf("Informe tres numeros:");
  scanf("%d %d %d", &A, &B, &C);

  rotacionar(&valor,A,B,C);
  printar(valor);

  return 0;
}
