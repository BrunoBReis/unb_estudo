#include <stdio.h>

void troca(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;
}

void troca_ponteiro (int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main(void)
{
    int a = 10, b = 100;
    
    troca(a, b);
    printf("a = %d, b = %d\n", a, b);
    
    troca_ponteiro(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
