#include <stdio.h>
#include <conio.h>

int main()
{
  float salario=0, media=0, soma=0;
  char resposta;
  int count=0;

  do{
    printf("Digite o salario do funcionario: \n");
    scanf("%f", &salario);

    printf("Deseja continuar? (S=Sim | N=Nao)\n");
    fflush(stdin);
    scanf("%c", &resposta);

    soma=(salario+soma);
    count++;

  }while((resposta != 'N') && (resposta != 'n'));

  media = (soma/count);
  printf("Media salarial: R$ %.2f", media);

  getch();
}
