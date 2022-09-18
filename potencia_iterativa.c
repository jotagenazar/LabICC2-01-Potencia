/*
Alunos: Felipi Yuri Santos (11917272) e João Gabriel Manfré Nazar (13733652)
Trabalho 1 - Potência recursiva
*/

#include <stdio.h>
#include <stdlib.h>

unsigned int iterativePow(unsigned int n, unsigned long long int k) {
  unsigned int res = 1;
  
  for(int i = 0; i < k; i++){
    res *= n;
    res %= 1000;
  }

  return res;
}

int main(void) {
  unsigned int n;
  unsigned long long int k;
  
  scanf("%u %llu", &n, &k);

  printf("%u\n", iterativePow(n, k));

  return 0;
}