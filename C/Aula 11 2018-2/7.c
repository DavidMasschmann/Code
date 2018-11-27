#include<stdio.h>
#include<conio.h>
int main()
{
  int numero, soma;

  printf("Informe um numero e ele sera somado com todos o numeros anteriores a ele ate chegar a zero: ");
  scanf("%d", &numero);

  do {
    soma = soma + numero;
    numero = numero - 1;
  } while(numero > 0);

  printf("Resultado: %d\n", soma);

  getche();
}
