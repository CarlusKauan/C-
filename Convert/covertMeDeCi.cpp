/*

Fazer  um  programa  em  C  que  pergunta  um  valor  em  metros  e  imprime  o
correspondente em decímetros, centímetros e milímetros.

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
	
	//Valor em decímetros
	vld = vlr * 10;
	//Valor em centímetros
	vlc = vld * 10;
	//Valor em milímetros
	vlm = vlc * 10;
	
	printf(" Valor digitado em [m] : %.0f \n" ,vlr);
	printf(" Valor em decímetros [dm] : %.0f\n" ,vld);
	printf(" Valor em centímetros [cm] : %.0f\n", vlc);
	printf(" Valor em milímetros [mm] : %.0f\n\n" ,vlm);
	
	system("pause");
	
}
