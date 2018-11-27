#include <stdio.h>
#include <conio.h>

int main()
{
	int N=0, numero=0;

	printf("Digite um numero: ");
	scanf("%i", &N);

	for (numero=1; numero<=N; numero++)
	{
		printf("\n%i", numero);
	}
getche();
}
