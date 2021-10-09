#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	//Declarações
	int n, i, j;

	printf("Digite o número máximo do triangulo.\n");
    printf("\n");
    
    printf("Atenção, o número deve ser impar.\n");
    scanf("%d", &n);
    
    printf("\n");
	
	//Condição se num for par então 
    if (n % 2 ==0)
    {
       printf("Numero invalido.\n");
    }
    else
    {
        for( i = 0; i <= (n / 2) + 1; i++)
        {
            for ( j = i + 1; j <= n - i; j++ )
            {
                printf("%d ",j);
            }

            printf("\n");

            for ( j = 0; j < (i + 1) * 2; j++ )
              printf(" ");
         }
    }
    
	system("pause");
}
