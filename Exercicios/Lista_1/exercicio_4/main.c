#include <stdio.h>
#include <stdlib.h>
#include "TADRotacao.h"

int main(int argc, char const *argv[]) {
  numero *valores;
  int A, B, C;

  printf("Informe tres numeros:");
  scanf("%d %d %d", &A, &B, &C);

  rotacionar (&valores,A,B,C);

  return 0;
}
