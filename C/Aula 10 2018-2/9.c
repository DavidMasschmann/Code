#include <stdio.h>
#include <conio.h>

int main()
{
	int counter=0, result=0;


  printf("Tabuada do 1\n");
	for (counter=1; counter<=10; counter++)
	{
    result = 1 * counter;
		printf("%i\n", result);
	}
  printf("Tabuada do 2\n");
  for (counter=1; counter<=10; counter++)
  {
    result = 2 * counter;
    printf("%i\n", result);
  }
  printf("Tabuada do 3\n");
  for (counter=1; counter<=10; counter++)
  {
    result = 3 * counter;
    printf("%i\n", result);
  }
  printf("Tabuada do 4\n");
  for (counter=1; counter<=10; counter++)
  {
    result = 4 * counter;
    printf("%i\n", result);
  }
  printf("Tabuada do 5\n");
  for (counter=1; counter<=10; counter++)
  {
    result = 5 * counter;
    printf("%i\n", result);
  }
getche();
}
