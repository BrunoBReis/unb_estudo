#include <stdio.h>

int repeticao_nova();

int main(void)
{
    // // n! = n*(n-1) *(n-2) *(n-3) *...*3*2*1
    // //  declarar
    // int fat, n, i;
    
    // // inicializar
    // scanf("%d", &n);
    // fat = 1;
    // i = n;
    
    // // repetir - verificar
    // while (n >= 1)
    // {
    //     fat = fat * n;

    //     // atualizar
    //     n--;
    // }

    // printf("%d! = %d\n", i, fat);

    // /* for (; n >= 1; n--) {
    // fat = fat * n;
    // }
    // */

    repeticao_nova();

    return 0;
}

int repeticao_nova()
{
    int resposta;
    int a;
    while (scanf("%d", &a) && a > 0)
    {
        // faz um print de a toda vez que é maior o que 0
        printf("%d\n", a);
    }

    return resposta;
}