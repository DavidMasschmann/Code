#include <stdio.h>
#include <string.h>
#include <conio.h>

int main () {
	char nomes[10][20];
	int i=0, user_select=0;

	for (i = 0; i < 10; i++) {
	   printf("Digite um nome para o aluno %i: \n", i+1);
	   gets(nomes[i]);
	}

	printf("Digite um numero:\n");
	scanf("%i", &user_select);

	printf("%s", nomes[user_select -1]);
	getche();
}
