#include<stdio.h>
#include<conio.h>

int main()
{
  int valor=0;
  printf("Insira um numero: ");
  scanf("%i", &valor);

  while (valor>=0)
    {
        printf("\n%i", valor);
        valor--;
    }
  getche();
}
