#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
	char ch;
	printf("\nPressione uma tecla: ");
	// getch(), getche(), getchar().
	ch = getche();
	printf("\nA letra que voce digitou: ", ch);
	// retorna 
	putchar(ch+1);
	putchar('\n');
	system("PAUSE");
	return 0;
}
