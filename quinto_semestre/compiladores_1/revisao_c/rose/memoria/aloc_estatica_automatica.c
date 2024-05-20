#include <stdio.h>

int *fa()
{
    int a = -9; // local - aloc automática -> stack
    int *i = &a; // i = &a;
    // printf("%p\n", i);
    return i; // endereco de a
}

int *fb()
{
    static int a = 1; // local - aloc estática -> data 
    int *i = &a; // i = &a;
    // printf("%p\n", i);
    return i; // endereco de a
}

void fc()
{
    char s[3] = {'a', 'b', 'c'}; // local - aloc automatica -> stack
}

int main(void)
{
    int *b = fa(); // endereco de a
    int *c = fb(); // endereco de a
    
    printf("*b = %d *c = %d\n", *b, *c);

    fc();

    printf("*b = %d *c = %d\n", *b, *c);
    // dois enderecos diferentes
    // fa() -> cria e destroi as variaveis locais
    // fb() -> criar e continuar com as variaveis locais

    return 0;
}