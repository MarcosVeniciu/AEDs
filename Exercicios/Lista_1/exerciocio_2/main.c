#include <stdio.h>
#include <stdlib.h>
#include "TADZerar.h"




int main(int argc, char const *argv[]) {
  numero valor;
  int a,b;

  inicializar(&valor);
  printf("Informe dois numeros: \n");
  scanf("%d %d", &a, &b);
  preencher(&valor, a, b);
  zerar(&valor);
  imprmir(valor);

  return 0;
}
