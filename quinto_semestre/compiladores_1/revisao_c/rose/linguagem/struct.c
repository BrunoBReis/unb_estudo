#include <stdio.h>

typedef struct date
{
    int dia, mes, ano;
} data;


struct cadastroAluno
{
    char nome[50];
    int matricula, idade;
    data nascimento;
};

struct cadastroProf
{
    char nome[50];
    char aulaMinistrada[50];
} prof, prof1, prof2; 

int main(void)
{
    struct cadastroAluno alu[2], alu1, alu2;
    alu1.idade = 10;
    alu1.matricula = 3219087;
    scanf("%49[^\n]", alu1.nome); // não precisa colocar o &, pois como é um vetor o alu1.nome 
                                 // já é o endereço
            
    alu1.nascimento.ano = 2002;
    alu1.nascimento.mes = 7;
    alu1.nascimento.dia = 30;

    printf("%s", alu1.nome);

    return 0;
}
