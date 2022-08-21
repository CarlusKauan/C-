// Programa que registra e exibe a sua sastifação do baile

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main(){
 	
 	setlocale(LC_ALL, "portuguese");
 	
	int nt, nt2, nt3; 
	char nome[100];

	printf("Avaliação do show: Tasha e Tracie \n\n" );
	
	printf("Registre o seu nome: ");
	scanf("%s", &nome);
	
	printf("O que você achou do show em relação a musica? \n");
	scanf("%d", &nt);
	
	printf("O que você achou do ambiente em relação ao show? \n");
	scanf("%d", &nt2);
	
	printf("O que você achou da performance dos artistas? \n");
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
