#include <stdio.h>


int main(void)
{
    char x[] = "teste"; 
    char y[] = {'b', 'r', 'u', 'n', 'o'};
    int i = 0;
    while (i < 5)
    {
        printf("%c", y[i]);
        i++;
    }
    printf("\n");

    char nome1[100], nome2[100], nome3[100];

    scanf("%s", nome1); // como o endereço de memória está em nome1. Não é necessário usar &nome1
                        // lê a informação até ' ', \t, \n
                        // lê uma plavara
        
    scanf("%5s", nome2);

    scanf("%99s[^\n]", nome3);

    printf("x = %s\nnome1 = %s\nnome2 = %s\nnome3 = %s", x, nome1, nome2, nome3);
    return 0;
}
