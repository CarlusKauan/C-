// Programa que registra e exibe a sua sastifa��o do baile

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main(){
 	
 	setlocale(LC_ALL, "portuguese");
 	
	int nt, nt2, nt3; 
	char nome[100];

	printf("Avalia��o do show: Tasha e Tracie \n\n" );
	
	printf("Registre o seu nome: ");
	scanf("%s", &nome);
	
	printf("O que voc� achou do show em rela��o a musica? \n");
	scanf("%d", &nt);
	
	printf("O que voc� achou do ambiente em rela��o ao show? \n");
	scanf("%d", &nt2);
	
	printf("O que voc� achou da performance dos artistas? \n");
	scanf("%d", &nt3);
	
	int media;
	
	media = (nt + nt2 + nt3) / 3;
	
	if(media > 5 ){
		printf("Feedback - positivo ! \n\n");
	}
	else{
		printf("Feedback - negativo ! \n\n");
	}
	
	system("pause");
	
	system("cls");
	
	printf("Obrigado por responder.");
	
	return 0;
 }
