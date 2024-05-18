#include <stdio.h>


int main(void)
{
    // cirando ponteiros e valores de i
    int i, *p, **r;

    // endereço de memória
    printf("Endereço de memória\n");
    printf("Endereço de i = %p\n", (void *) &i);
    printf("Endereço de p = %p\n", (void *) &p);
    printf("Endereço de r = %p\n", (void *) &r);

    i = 5; // adicionando um valor para i
    
    // antes de referenciar
    printf("Antes de referenciar\n");
    printf("Valor de i = %d\n", i);
    //printf("Valor de p antes de referenciar %d", *p); // Segmentation fault (core dumped)

    p = &i; // referenciando o proprio i 

    // depois de referenciar
    printf("Depois de referenciar p = &i\n");
    printf("Valor de i = %d\n", i);
    // printf("Valor de p = %p\n", p); // equivale ao endereço de memória de i

    r = &p; // referenciando o ponteiro do i

    // depois de referenciar
    printf("Depois de referenciar r = &p\n");
    printf("Valor de i = %d\n", i);
    printf("Valor de p = %d\n", *p);
    printf("Valor de r = %d\n", **r);
    
    return 0;
}
