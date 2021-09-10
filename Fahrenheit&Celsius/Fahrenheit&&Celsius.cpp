	/*
Fazer  um  programa  em  "C"  que  pergunte  um  valor  em  graus  Fahrenheit  e
imprime no vídeo o correspondente em graus Celsius usando as fórmulas que
seguem.
	
a) Usar uma variável double para ler o valor em Fahrenheit e a fórmula
	C=(f-32.0) * (5.0/9.0).
b) Usar uma variável int para ler o valor em Fahrenheit e a fórmula
    C=(f-32)*(5/9).
	
	*/	
	
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int vlf; 
	float vlc;
	
	printf("Conversor de Fahrenheit para Celsius !\n");
	
	printf("Digite um valor em graus Fahrenheit ?");
	scanf("%d", &vlf);
	
	vlc = (vlf - 32.0) * (5.0 / 9.0);
	
	printf("O valor em Celsius é: %.3f\n\n", vlc);
	
	system("pause");
}
