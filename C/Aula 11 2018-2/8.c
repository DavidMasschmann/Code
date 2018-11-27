#include <stdio.h>
#include <conio.h>

int main()
{
  int senha=0;

  printf("Digite a senha:\n");
  scanf("%i", &senha);

  do {
    printf("Senha incorreta, tente novamente:\n");
    fflush(stdin);
    scanf("%i", &senha);
  } while(senha != 2016);

  if (senha == 2016)
    printf("ACESSO PERMITIDO");

  getche();
}
