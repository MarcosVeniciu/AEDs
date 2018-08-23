#include <stdio.h>
#include <stdlib.h>
#include "rotacao.h"


void rotacionar(int *d, int *e, int *f) {
  int g;

   g = *d;
  *d = *e;
  *e = *f;
  *f = g;
}
