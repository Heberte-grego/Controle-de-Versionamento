#include<stdio.h>
#include<stdlib.h>

// Este programam eh para parabenizar a Juliana Bueno pelo seu dia das maes.

char nome[10];
int filhos;
int idade1, idade2, idade3, condicao;

//In�cio
char main(){
	
	
	printf("\nOla, muito feliz em conhece-la!\n"); //Apresenta��o
	
	printf("\nQual eh o seu nome?:"); //Essa linha pergunta o nome  
	scanf ("%s", &nome); // Essa linha l� nome e armazena na vari�vel nome.
	
	printf("\nQuantos anos de idade voce tem?:\n"); // Essa linha pergunta a idade 
	scanf ("%d", &idade1);	// Essa linha l� a idade e amazena na vari�vel idade1.
	
	printf("\nQuantos filhos(as) voce tem?:\n"); // Essa linha pergunta quantidade de filhos.
	scanf ("%d", &filhos); // Essa lina l� quantidade de filhos e armazena na vari�vel filhos.
	
	printf("\nQual a idade dos seus filhos(as)?:\n"); // Essa linha pergunta a idade dos filhos.
	scanf ("%d", &idade2); // Essa linha l� idade e armazena na vari�vel idade2.
	scanf ("%d", &idade3); // Essa linha l� idade e armazena na vari�vel idade2.
	
	printf("\nVoce eh feliz em ser mae\n"); // Essa linha faz uma pergunta.
	printf("\nSe sim digite 0, Se nao digite 1: \n"); // Essa linha explica as condi��es.
	scanf ("\n%d", &condicao); // Essa linha  l� resposta e armazena na vari�vel condicao.
	
	if(condicao == 1) // Essa condi��o ser� executada se a resposta for sim.
		{
				printf("\nParabens: %s\n", nome); // Mostrar string da vari�vel nome.
				printf("\nVoce tem %d anos de idade, es linda\n", idade1); // Mostrar inteiro da vari�vel idade1
				printf("\nTem %d filhos(as) abencoados. Um tem %d anos de idade, e o outro tem %d de idade.\n", filhos, idade2, idade3); // Mostrar inteiro das vari�veis filhos, idade1, idade2.
				printf("\nParabens, HOJE eh o seu dia, dia das maes. Jesus Cristo te ama\n"); // Essa linha mostra parabeniza��o pelo dia das maes.	
    	} 	
	else if(condicao == 0) // Essa condi��o ser� executada se a resposta for n�o.

	 	printf("\nSer mae eh um presente de DEUS, voce deveria ser feliz. Que DEUS te conceda muita graca e paz para ser feliz como mae.\n"); // Essa mostra resultado da condi��o.
	
	
	return (0);
}
