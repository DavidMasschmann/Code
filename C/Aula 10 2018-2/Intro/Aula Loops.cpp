#include <stdio.h>
#include <conio.h>
main()
{
  int cont=0, x;
  float peso;
  for (x=1; x<=10; x++)
    {
      printf("\nInforme peso:");
      scanf("%f", &peso);
      if (peso>90)
        cont++;
    }
    printf("\nNumero de pessoas acima do peso: %i", cont);
    getche();
}
