#include <stdio.h>

int main(void)
{
    int a[2][2] = { {1,2},
                    {3,4} };
    int *m; // ou int *m = a[0];
    m = a[0]; // apontando para o primeiro elemento

    // m = a // nao pode ser usado dessa maneira

    for (int i = 0; i < 4; i++)
    {
        // as duas maneiras funciona igual
        printf("%2d", *(m + i));
        printf("%2d", m[i]);
    }


    return 0;
}
