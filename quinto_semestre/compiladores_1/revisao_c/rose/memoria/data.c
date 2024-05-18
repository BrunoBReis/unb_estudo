#include <stdio.h>

int a = 0; // data - global; aloc. estatica
static int b = 0; // data - estática global; aloc. estática

void incrementa(void)
{
    static int c = 0; // stack - estática local; aloc. estática
    // alocada uma vez, mas válida após o término da função


    printf("a : %d, c : %d\n", a, c);
    a++;
    c++;
}

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        incrementa();
    }
    return 0;
}