/*

Fazer  um  programa  em  C  que  pergunta  um  valor  em  metros  e  imprime  o
correspondente em dec�metros, cent�metros e mil�metros.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float vlr,vld,vlc,vlm;
	
	printf(" Conversor De Metros \n");
	
	printf(" Digite o valor ?");
	scanf("%f" ,&vlr);
	
	//Valor em dec�metros
	vld = vlr * 10;
	//Valor em cent�metros
	vlc = vld * 10;
	//Valor em mil�metros
	vlm = vlc * 10;
	
	printf(" Valor digitado em [m] : %.0f \n" ,vlr);
	printf(" Valor em dec�metros [dm] : %.0f\n" ,vld);
	printf(" Valor em cent�metros [cm] : %.0f\n", vlc);
	printf(" Valor em mil�metros [mm] : %.0f\n\n" ,vlm);
	
	system("pause");
	
}
