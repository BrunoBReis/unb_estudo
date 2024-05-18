#include <stdio.h>

int main() {
    int vetor[3] = {1, 2, 3};

    // Endereço do array usando &vetor
    printf("Endereco de &vetor = %p\n", (void*)&vetor);

    // Endereço do array usando vetor
    printf("Endereco de vetor = %p\n", (void*)vetor);

    // Mostrando que &vetor e vetor são equivalentes na representação de endereço
    if ((void*)&vetor == (void*)vetor) {
        printf("&vetor e vetor têm o mesmo endereço.\n");
    } else printf("&vetor e vetor NÃO têm o mesmo endereço.\n");
    

    // Tipo de &vetor e vetor
    printf("Tamanho de &vetor (int (*)[3]) = %zu bytes\n", sizeof(&vetor));
    printf("Tamanho de vetor (int *) = %zu bytes\n", sizeof(vetor));
    
    // Incremento de ponteiro
    int (*pArray)[3] = &vetor; // pArray é um ponteiro para um array de 3 inteiros
    int *pElement = vetor;     // pElement é um ponteiro para inteiro

    // Incrementando ponteiros
    printf("Endereco pArray = %p, Endereco pArray + 1 = %p\n", (void*)pArray, (void*)(pArray + 1));
    printf("Endereco pElement = %p, Endereco pElement + 1 = %p\n", (void*)pElement, (void*)(pElement + 1));
    
    return 0;
}
