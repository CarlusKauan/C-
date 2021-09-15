#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	// Fazer um algoritmo, que calcule o IMC (índice de massa corporal)
	
	float weight,height,calc;
	
	printf("Digite o seu peso ?");
	scanf("%f", &weight);
	
	printf("Digite a sua altura ?");
	scanf("%f", &height);
	
	calc = weight / ( height * height );
	
	printf("IMC %.1f \n", calc);
	
	if( calc < 18.5){
		printf("Abaixo do peso");
	} else if( calc >= 18.5 && calc <= 24.9){
		printf("Peso ideal");
	} else if( calc >= 25 && calc <= 29.9){
		printf("Sobre Peso");
	} else if( calc >= 30 && calc <= 34.9 ){
		printf("Obesidade grau 1");
	} else if( calc >= 25 && calc <= 39.9 ){
		printf("Obesidade grau 2");
	} else if( calc > 40){
		printf("Obesidade grau 3");
	}
}
