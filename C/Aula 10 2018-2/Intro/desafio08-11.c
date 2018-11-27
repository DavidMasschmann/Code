#include <stdio.h>
#include <conio.h>
int main()
{
  float media, nota1, nota2;
  char test;

do {
    printf("\nDigite o primeira nota:\n");
    scanf("%f", &nota1 );
    printf("Digite o segunda nota:\n");
    scanf("%f", &nota2 );
    media=((nota1+nota2)/2);
    printf("Media= %f", media );
    printf("\nDeseja continuar? (S para Sim, N para Nao)\n");
    fflush(stdin);
    scanf("%c", &test);
  } while((test=='S') || (test=='s'));
}
