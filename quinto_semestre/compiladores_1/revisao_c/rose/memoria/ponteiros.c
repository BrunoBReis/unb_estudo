#include <stdio.h>


int main(void)
{
    int i, *p, **r;

    // endereço de memória
    printf("Endereço de i = %p\n", (void *) &i);
    printf("Endereço de p = %p\n", (void *) &p);
    printf("Endereço de r = %p\n", (void *) &r);

    i = 5;
    
    // antes de referenciar
    printf("Valor de i = %d\n", i);

    p = &i;

    // depois de referenciar
    printf("Valor de i = %d\n", i);
    printf("Valor de p = %d\n", *p);

    r = &p;

    // depois de referenciar
    printf("Valor de i = %d\n", i);
    printf("Valor de p = %d\n", *p);
    printf("Valor de r = %d\n", **r);
    
    return 0;
}
