#include<stdio.h>
#include<conio.h>
int main()
{
  int select;

  printf("Escolha uma cor abaixo: \n (1) Azul \n (2) Rosa \n (3) Preto \n (4) Vermelho\n");
  scanf("%i", &select);

  while ((select !=1) && (select !=2) && (select !=3) && (select !=4))
  {
    printf("Por favor, digite um numero valido.");
    printf("\n(1) Azul\n(2) Preto\n(3) Rosa\n(4) Vermelho\n");
    fflush(stdin);
		scanf("%i",&select);
  }

  getche();
}
