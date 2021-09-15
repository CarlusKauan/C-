#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	//Fazer um  programa em C que imprime uma tabela com a tabuada de 1 a 9
	
	setlocale(LC_ALL,"portuguese");
	
	int num, cont;
	
	printf("Digite o número da tabuada !");
	scanf("%d", &num);
		
	for(cont = 1; cont < 11 ; cont++){
		printf("%d x %d = %d\n", num, cont, num*cont);	 
	}
	system("pause");
}
