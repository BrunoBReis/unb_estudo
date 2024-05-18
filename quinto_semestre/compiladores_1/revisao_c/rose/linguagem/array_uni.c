#include <stdio.h>

void vec(void);


int main(void)
{
    // Inicialização correta do vetor
    char letras[4] = {'a', 'b', 'c', 'd'};
    
    // Inicializações erradas do vetor
    
    /*
    int a = 5;
    int y[a] = {1,2,3,4,5}; // erro
    */

   /*
    int erro[5];
    erro  = {1,2,3,4,5}; // erro
    erro[0] = 2; // ok
   */

   /*
    int peso[] = {123,124,125}; // ok
    int b[]; // erro
   */

    // Usando a função
    vec();

    return 0;
}

void vec(void)
{
    int x[3];
    x[0] = 1;
    x[1] = 2;
    x[2] = 3;

    int teste[] = {1,2,3,4,5};

    printf("endereço de x: %p valor de x: %p\n", &x, x); // &x = x
    printf("endereço de x: %p valor de x: %d\n", &x[0], x[0]);
    printf("endereço de x: %p valor de x: %d\n", &x[1], x[1]);
    printf("endereço de x: %p valor de x: %d\n", &x[2], x[2]);

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", teste[i]);
    }

    // tanto o x quanto &x representam o endreço de memória
    // o endereço de memória do primeiro elemento do array é o mesmo do x e &x
}
