#include <stdio.h>
#include <stdlib.h>


typedef struct {
  int A, B, C;
} numero;

int s;
void inicializar (numero *valor_inicial);
void rotacionar(numero *valores, int a, int b, int c);
void printar(numero printar);
