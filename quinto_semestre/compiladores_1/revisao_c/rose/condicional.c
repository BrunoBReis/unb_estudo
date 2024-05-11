#include <stdio.h>

int main(void)
{
    char c;
    scanf("%c", &c);

    if (c == 'a' || c == 'A' || c == 'e' || c == 'E' ||
        c == 'i' || c == 'I' || c == 'o' || c == 'O' ||
        c == 'u' || c == 'U')
    {
        if (c >= 'A' && c <= 'U') 
            printf("%c: vogal uppercase\n", c);
        else 
            printf("%c: vogal lowercase\n", c);
    }
    else if (c >= '0' && c <= '9')
        printf("%c: numero", c);
    else
        printf("%c: consoante", c);
    return 0;
    // como os números seguem a lógica da tabela ascii, podemos utilizar
    // os operadores relacionais maior ou igual que e menor ou igual que
}
