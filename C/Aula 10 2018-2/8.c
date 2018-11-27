#include <stdio.h>
#include <conio.h>

int main()
  {
  	int counter=0, x=0;
    float numero=0;

  	for (counter=1; counter<=10; counter++)
  	{
  		printf("Digite um numero: \n");
      scanf("%f", &numero);

      if (numero<0)
      {
        x++;
      }
  	}
  printf("%i numeros sao negativos.\n", x);
  getche();
  }
