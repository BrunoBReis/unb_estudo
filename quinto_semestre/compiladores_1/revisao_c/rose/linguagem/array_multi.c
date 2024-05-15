#include <stdio.h>


int main(void)
{
    int a[3][4] = {{10 ,6 ,7 ,12} , {23 ,32 ,14 ,52} , {33 ,17 ,18 ,54}};

    int linha, coluna;
    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 4; coluna++)
            printf("%4d", a[linha][coluna]);
        printf("\n");
    }

    return 0;
}
