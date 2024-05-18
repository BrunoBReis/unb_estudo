#include <stdio.h>


int main(void)
{
    int vetor[2];

    int *ponteiro = vetor;

    vetor[1] = 9;

    printf("Valor do vetor[0] = %d\n", vetor[0]); // valor do vetor na posição 1
    printf("Valor do vetor[1] = %d\n", vetor[1]); // valor do vetor na posição 1
    printf("Valor do ponteiro[0] = %d\n", *(ponteiro)); // 
    printf("Valor do ponteiro[1] = %d\n", *(ponteiro + 1)); // 
    
    // printf("%d\n", ponteiro[1]);
    // printf("%d\n", *(ponteiro + 1));


    return 0;
}
