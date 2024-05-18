#include <stdio.h>

typedef struct {
    int valor;
} Point; // boa pratica de programação definir o com a primeira letra maiúscula


int main(void)
{
    Point s, *ptr;
    ptr = &s;

    s.valor = 20;
    printf("%d\n", s.valor);

    (*ptr).valor = 40;
    printf("%d\n", s.valor);

    ptr->valor = 30;

    printf("%d\n", s.valor);

    // ptr.valor = 60; não pode se usar assim
    
    return 0;
}
