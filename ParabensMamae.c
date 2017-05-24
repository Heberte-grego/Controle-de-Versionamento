#include<stdio.h>
#include<stdlib.h>

// Este programa eh para parabenizar a Juliana Bueno pelo seu dia das maes.

char nome[10];
int filhos, idade1, idade2, idade3, condicao1, condicao2;

char main(){
	
	printf("\nOla, muito feliz em conhece-la!\n");
	
	printf("\nQual eh o seu nome?:");
	scanf ("%s", &nome);
	
	printf("\nQuantos anos de idade voce tem?:\n");
	scanf ("%d", &idade1);	
	
	printf("\nQuantos filhos(as) voce tem?:\n");
	scanf ("%d", &filhos);
	
	printf("\nQual a idade dos seus filhos(as)?:\n");
	scanf ("%d", &idade2);
	scanf ("%d", &idade3);
        
	printf( "\nVoce e feliz sendo mae?:\n");
	scanf("%d", &condicao1);
	scanf ("%d", &condicao2);
	 if (condicao1 != 'nao'){ 
	 printf("\nMaravilha.Voce e Feliz!\n");
	 }
	 else
	if (condicao2 == 'nao'){
	 	printf("\nVoce sera muito feliz ainda!\n");
	 }
	 getch();
	 
	printf("\nParabens: %s\n", nome);
	printf("\nVoce tem %d anos de idade, es linda\n", idade1);
	printf("\nTem %d filhos(as) abencoados. Um tem %d anos de idade, e o outro tem %d de idade.", filhos, idade2, idade3,condicao1, condicao2);
	printf("\nParabens, HOJE eh o seu dia, dia das maes. Jesus Cristo te ama\n");	
	
	
	
	return (0);
}
