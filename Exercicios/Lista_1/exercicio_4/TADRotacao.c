#include <stdio.h>
#include <stdlib.h>
#include "TADRotacao.h"


void rotacionar(numero *valores, int a, int b, int c) {
  valores->A = b;
  valores->B = c;
  valores->C = a;
}
