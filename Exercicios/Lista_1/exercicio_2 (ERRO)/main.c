#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"


int main(int argc, char const *argv[]) {
  int a, b, *v1=NULL, *v2=NULL;

  v1 = &a;
  v2 = &b;

  printf("Informe dois numeros: ");
  scanf("%d %d", &a, &b );

  zerar(*v1,*v2);


  return 0;
}
