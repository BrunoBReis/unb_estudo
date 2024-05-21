/* Interpretador de automÃ¢tos desenvolvido em sala, juntamente com os */
/* alunos, de compiladores da UnB-FGA turma de 2024-1. Esta */
/* implementaÃ§Ã£o ainda estÃ¡ incompleta e faltam pedaÃ§os significativos */
/* no que tange a interpretaÃ§Ã£o dos estados. TambÃ©m Ã© necessÃ¡ria */
/* reflexÃ£o sobre modificaÃ§Ãµes para comportar AFN */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// O que é Q_st?
typedef struct Q_st
{
	char t; // verificação do estado de transição 
	int *v; // vetor de transições 
} Q_st;

// função que compara dois ponteiros constantes e sem tipo
int compara(const void *a, const void *b)
{
	// fprintf não é usado para ler o conteúdo de site?
	fprintf(stderr, "XXXX\n");
	fprintf(stderr, "xxxx: %s\n", *(const char **)a);
	return strcmp(*(const char **)a, *(const char **)b);
	// strcmp compara duas strings
	// eu poderia usar o retunr assim
	// strcmp(*(const char)a, *(const char)b);
}

int main(void)
{
	// quantidade de estados
	int Qs;
	scanf("%d", &Qs);
	// criando um ponteiro de estados 
	Q_st *estados;
	// criando um vetor de tamanho Qs com Q_st de memória
	estados = calloc(Qs, sizeof(Q_st));
	// [f(vetor), 1, 2, 3]

	// quantidade de símbolos do alfabeto
	int Es;
	scanf("%d", &Es);
	// criando o ponteiro de alfabeto
	char **alfabeto;
	// criando um vetor de tamanho Es com um ponteiro de char?
	alfabeto = calloc(Es, sizeof(char *));
	
	// Coleta dos símbolos do alfabeto
	for (int i = 0; i < Es; i++)
	{
		// nome do simbolo
		char buffer[10];
		scanf(" %s", buffer);
		// salva a string de buffer no alfabeto[i]
		alfabeto[i] = strdup(buffer);
	}

	// porque usar o qsort?
	qsort(alfabeto, Es, sizeof(char *), compara);
	// print de todos as letras de alfabeto
	printf("Meu alfabeto:");
	for (int i = 0; i < Es; i++)
		printf("[%s] ", alfabeto[i]);
	printf("\n");
	// não entendi o que isso está fazendo
	for (int i = 0; i < Qs; i++)
	{
		// alocando o tamanho do int em quantidade de símbolos do alfabeto
		estados[i].v = malloc(sizeof(int) * Es); // não deveria estar fora do loop?
		for (int j = 0; j < Es; j++)
			estados[i].v[j] = -1; // colocando -1 em todos os 
	}

	int ds;
	scanf("%d", &ds);
	char *simbolo = malloc(10);
	char s2;
	for (int i = 0; i < ds; i++)
	{
		int e;
		int e2;
		scanf("%d %s %d", &e, simbolo, &e2);
		printf("D: %d %s %d\n", e, simbolo, e2);
		char **p = bsearch(&simbolo, alfabeto, Es, sizeof(char *), compara);
		unsigned long pv = (p - alfabeto) / 8;
		estados[e].v[pv] = e2;
	}

	int qi;
	scanf("%d", &qi);
	int Fs;
	scanf("%d", &Fs);
	for (int i = 0; i < Fs; i++)
	{
		int q;
		scanf("%d", &q);
		estados[q].t = 'f';
	}
}