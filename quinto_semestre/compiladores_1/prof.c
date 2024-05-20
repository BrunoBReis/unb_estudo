/* Interpretador de automÃ¢tos desenvolvido em sala, juntamente com os */
/* alunos, de compiladores da UnB-FGA turma de 2024-1. Esta */
/* implementaÃ§Ã£o ainda estÃ¡ incompleta e faltam pedaÃ§os significativos */
/* no que tange a interpretaÃ§Ã£o dos estados. TambÃ©m Ã© necessÃ¡ria */
/* reflexÃ£o sobre modificaÃ§Ãµes para comportar AFN */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// o que Q_st faz?
typedef struct Q_st {
     char t;
     int *v;
} Q_st;

// tem como entrada dois vetores constantes e sem tipo 
int compara(const void *a,const void *b) {
	fprintf(stderr,"XXXX\n"); // não sei o que fprintf faz
	fprintf(stderr,"xxxx: %s\n",*(const char **)a);
	return strcmp( *(const char**)a,*(const char**)b); // utiliza o strcmp para comparar os valores do char dos vetores a e b
	// se o valor não for char a função não é executada?
}

int main(void)
{
  int Qs;
  scanf("%d",&Qs); // coletada da quantidade de estados
  Q_st *estados=calloc(Qs,sizeof(Q_st)); // o que calloc faz?

  int Es;
  scanf("%d",&Es);

  char **alfabeto; // criação do alfabeto
  alfabeto=calloc(Es,sizeof(char*)); // alocando o tamanho de char* em Es 
  for(int i=0;i<Es;i++){
		char buffer[10];
		scanf(" %s",buffer);
		alfabeto[i]=strdup(buffer);
  }

	qsort(alfabeto,Es,sizeof(char*),compara);
	printf("Meu alfabeto:");
	for(int i=0;i<Es;i++) printf("[%s] ",alfabeto[i]);
	printf("\n");
	for(int i=0;i<Qs;i++){
		estados[i].v=malloc(sizeof(int)*Es);
		for(int j=0;j<Es;j++)
			estados[i].v[j]=-1;
	}

	int ds;
	scanf("%d",&ds);
	char *simbolo=malloc(10);
	char s2;
	for(int i=0;i<ds;i++)
	{
		int e; int e2;
		scanf("%d %s %d",&e,simbolo,&e2);
		printf("D: %d %s %d\n",e,simbolo,e2);
		char **p=bsearch(&simbolo,alfabeto,Es,sizeof(char*),compara);
		unsigned long pv=(p-alfabeto)/8;
		estados[e].v[pv]=e2;
	}

	int qi; scanf("%d",&qi);
	int Fs;
	scanf("%d",&Fs);
	for(int i=0;i<Fs;i++) {
		int q;
		scanf("%d",&q);
		estados[q].t='f';
	}
}