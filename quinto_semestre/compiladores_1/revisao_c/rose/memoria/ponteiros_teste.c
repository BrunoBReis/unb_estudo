#include <stdio.h>

int main(void)
{
    int valor, *ponteiro = &valor; // alocar endereços para o ponteiro em uma linha
    valor = 5;

    printf("%d", *ponteiro);

    return 0;
}
