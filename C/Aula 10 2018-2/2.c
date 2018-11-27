#include <stdio.h>
#include <conio.h>
int main()
{
  int count=0, numero;

  printf("Escreva um numero inteiro:\n");
  scanf("%i", &numero );
  
  for (count=0; count<10; count++)
  {
  printf("%i\n", numero);
  }
  getche();
}
