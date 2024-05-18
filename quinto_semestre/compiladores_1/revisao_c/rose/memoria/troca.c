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
    t = *a; // conteúdo de t = conteúdo de a apontado pelo ponteiro *a
    *a = *b; // conteúdo de a = conteúdo de b apontado pelo ponteiro *b
    *b = t; // conteúdo de b = conteúdo de t
}

int main(void)
{
    int a = 10, b = 100;

    printf("Antes\na = %d e b = %d\n", a, b);
    
    troca(a, b);
    printf("Fução troca\na = %d, b = %d\n", a, b);
    
    troca_ponteiro(&a, &b);
    printf("Função troca_ponteiro\na = %d, b = %d\n", a, b);

    return 0;
}
