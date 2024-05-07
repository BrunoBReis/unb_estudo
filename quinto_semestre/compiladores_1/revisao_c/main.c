#include <stdio.h>

void ex1();
void ex2();
void ex3();

int main(void)
{
    // Inteiros sem sinal
    unsigned char a; // 0 -> (2^8-1) - 1 byte
    unsigned int b;  //

    // Inteiros com sinal
    char aa; // -2^7 -> (2^7-1) - 1 byte
    int bb;

    /*char e unsined char não representa caracters, mas
    os números entre 0 e 127 podem ser usados para isso*/

    ex1();
    ex2();
    ex3();

    return 0;
}

void ex1()
{
    char letter = 32;
    for (int i = 0; i < (127 - 32); i++)
    {
        printf("%c", letter);
        letter += 1;
    }
    printf("\n");
}

void ex2()
{
    char letter = 32;
    for (int i = 0; i < (127 - 32); i++)
    {
        if ((letter % 2) != 0)
            printf("%c", letter);
        letter += 1;
    }
    printf("\n");
}

void ex3()
{
    char a, b;
    scanf("%c\n%c", &a, &b);
    if (a < b)
    {
        printf("%c é vem antes do que %c", a, b);
    }
    else
        printf("%c vem depois de %c", a, b);
}