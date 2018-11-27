#include<stdio.h>
#include<conio.h>

int main()
{
  float N1, N2, div;

  do{
	printf("Digite um valor: ");
	scanf("%f",&N1);
  }while (N1<0);

  do{
	printf("Digite outro valor: ");
	scanf("%f",&N2);
  }while (N2>N1);

  div =N1/N2;
	printf("O resultado da divisao e: %.2f", div);

  getche();
}
