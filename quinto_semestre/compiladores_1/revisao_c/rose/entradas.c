#include <stdio.h>

int main(void)
{
    int x;
    float y;

    scanf("%d %f", &x, &y);
    // aloque o valor de %d para o endereço de memória x
    // aloque o valor de %f para o endereço de memória y

    printf("endereço de memória x: %p\nendereço de memória y: %p\n", &x, &y);

    printf("valor de memória x: %d\nvalor de memória y: %f\n", x, y);


    return 0;
}
