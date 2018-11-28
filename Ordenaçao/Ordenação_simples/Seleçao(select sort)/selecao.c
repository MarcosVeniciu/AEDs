#include <stdio.h>
#include <stdlib.h>
//vta errado
int main(int argc, char const *argv[]) {
  int v[4], i, j, menor, aux;
  for ( i = 0; i < 4; i++) {
    scanf("%d", &v[i]);
  }

  for (i = 0; i < (4-1); i++) {
    menor = i;
    for (j = (i+1); j < 4; j++) {
      if (v[j] < v[menor]) {
        menor = j;
      }
    }
    aux = v[menor];
    v[menor] = v[i];
    v[i] = aux;
  }

  for ( i = 0; i < 4; i++) {
    printf("%d ", v[i]);
  }
  return 0;
}
