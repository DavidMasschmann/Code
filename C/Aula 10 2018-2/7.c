#include <stdio.h>
#include <conio.h>

int main()
{
	int counter=0, result=0, x=0;

  printf("Digite o numero que deseja a tabuada: \n");
  scanf("%i", &x);

	for (counter=1; counter<=10; counter++)
	{
    result = x * counter;
		printf("%i\n", result);
	}
getche();
}
