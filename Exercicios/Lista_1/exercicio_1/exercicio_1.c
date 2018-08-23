// Qual é a saída para o seguinte segmento de código?
#include <stdlib.h>
#include <stdio.h>


int main(int argc, char const *argv[]) {
  int count = 10, *temp, sum = 0;

  temp = &count;  // O ponteiro temp recebe o endereço de count (Aponta para count)
  *temp = 20;     // Armazena 20 na variavel para qual o *temp esta apontando (count)
  temp = &sum;    // Agora tem recebe o endereço de sun (aponta para sun)
  *temp = count;  // Armazena o valor armazenado em count na variavel apontada por *tem (sun)
  printf("count = %d, *temp = %d, sum = %d\n", count, *temp, sum );
    // Count = 20 sun = 20 *temp = 20 (printa o valor armazenado na variavel apontada po *temp)  

  return 0;
}
