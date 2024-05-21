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

	// ordena o vetor do alfabeto sem alterar o endereço de memória
	qsort(alfabeto, Es, sizeof(char *), compara);
	// verificação da ordem do alfabeto
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
			// estado 0 lendo o vetor a, alocando o estado que eu quero
			// 0.a = (input)
	}

	int ds;
	scanf("%d", &ds);
	char *simbolo = malloc(10);
	char s2;
	for (int i = 0; i < ds; i++)
	{
		// estado atual
		int e;
		// consumindo e vou para e2
		int e2;
		scanf("%d %s %d", &e, simbolo, &e2);
		// verificação da leitura
		printf("D: %d %s %d\n", e, simbolo, e2);
		// busca pelo endereço de memória do simbolo do alfebto 
		char **p = bsearch(&simbolo, alfabeto, Es, sizeof(char *), compara);
		// pegando o index do simbolo atual
		unsigned long pv = (p - alfabeto);
		estados[e].v[pv] = e2; // alteração do -1 para o e2;
		// b 100    a 100
		// a 101 -> b 101
		// c 102    c 102
	}

	// estado inicial
	int qi;
	scanf("%d", &qi);
	// numero de estados finais
	int Fs;
	scanf("%d", &Fs);
	for (int i = 0; i < Fs; i++)
	{
		// estado final atual
		int q;
		scanf("%d", &q);
		// tal estado "q" será o estado final
		estados[q].t = 'f';
	}
}