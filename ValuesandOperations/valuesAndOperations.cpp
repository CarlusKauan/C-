// Fazer  um  programa  que  lê  um  valor,  um  operador  (+,-,*,/)  e  outro  valor  e imprime o resultado da expressão.
// <valor 1> <operador> <valor 2>

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float num,num2, resultado;
	
	char operacao[100];
	
	printf("Digite o valor ?");
	scanf("%f", &num);
	
	printf("Informe a operação ?");
	scanf("%s", &operacao);
	
	printf("Digite o outro valor ?");
	scanf("%f", &num2);
	
	if(operacao == "+"){
		resultado = num + num2;
	}
	else if(operacao == "-"){
		resultado = num - num2;
	}else {
		resultado = num / num2;
	}
	
	printf("%.1f %s %.1f = %.1f", num,operacao,num2,resultado);
	
}
