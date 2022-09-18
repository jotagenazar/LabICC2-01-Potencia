/*
Alunos: Felipi Yuri Santos (11917272) e João Gabriel Manfré Nazar (13733652)
Trabalho 1 - Potência recursiva
*/

#include <stdio.h>
#include <stdlib.h>

unsigned int recursivePow(unsigned int n, unsigned long long int k) {
    
    //casos de parada
    if(k == 0)
        return 1;
    if(k == 1)
        return n % 1000;

    //setup para casos com k maior que 1
    unsigned int powAux = recursivePow(n, k/2);

    if(k % 2 == 0)
        return (powAux * powAux) % 1000;
    //caso k seja impar
    return (powAux * powAux * n) % 1000;
}

int main() {
    unsigned int n;
    unsigned long long int k;

    scanf(" %u %llu", &n, &k);

    printf("%u\n", recursivePow(n, k));

    return EXIT_SUCCESS;
}