#include <stdio.h>
#include <conio.h>

int main()
{
  float numero=0, count=0, resultado=0;

  printf("Digite um numero inteiro: ");
  scanf("%f", &numero);

  do {
    numero = numero/2;
    count++;
    resultado = numero;
  } while(numero>1);

  printf("O resultado da ultima divisao foi: %f\n", resultado);
  printf("E o numero foi dividido por dois %.0f vezees", count);

  getche();
}
