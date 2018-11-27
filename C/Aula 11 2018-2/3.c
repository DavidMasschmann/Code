#include<stdio.h>
#include<conio.h>

int main()
{
  char tecla;

  do {
    printf("\nDigite uma tecla: ");
    fflush(stdin);
    scanf("%c",&tecla);

  } while((tecla != 'W') && (tecla != 'w'));
  getche();
}
