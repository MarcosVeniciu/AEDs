#include <stdio.h>
#include <stdlib.h>
#include "rotacao.h"


int main(int argc, char const *argv[]) {
  int A, B, C, *a = NULL, *b = NULL, *c = NULL;

  printf("Informe três numeros: ");
  scanf("%d %d %d", &A, &B, &C);
  a = &A;
  b = &B;
  c = &C;

  rotacionar(*a, *b, *c);

  return 0;
}
