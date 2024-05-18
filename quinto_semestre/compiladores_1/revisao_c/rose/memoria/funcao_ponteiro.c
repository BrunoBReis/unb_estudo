// não faço ideia do que esse código faz

#include <stdio.h>
#include <string.h>

void funcao(int a)
{
    printf("%d\n", a);
}

void funcao2(int a)
{
    printf("%d\n", a + 1);
}

int main(int argc, char **argv)
{
    void (*fp)(int); // nao sei o que essa linha faz

    if (argc > 1 && strcmp(argv[1], "f") == 0)
        fp = &funcao;
    else
        fp = &funcao2;
    
    (*fp)(10);

    return 0;
}
