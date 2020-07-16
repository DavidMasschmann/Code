#include <stdio.h>
#include <string.h>
#include <conio.h>

struct cadastro
{
  char nome[80];
  char endereco[80];
  int telefone;
  int idade;
  char sexo;
  char titulacao[80];
}

int main()
{
  // após deve ser numero de profs homens, e media de todos prof idade, os nomes dos acima da média.
  struct cadastro professores[20];
  int i,x, homens;

  for (i = 0; i < 20; i++) {
    printf("Digite o nome:\n");
    gets(professores[i].nome)

    printf("Digite o endereço:\n");
    gets(professores[i].endereco)

    printf("Digite o telefone:\n");
    scanf("%i", &professores[i].telefone);

    printf("Digite a idade:\n");
    scanf("%i", &professores[i].idade);

    printf("Digite o sexo: (f/m)\n");
    scanf("%c", &professores[i].sexo);
    if (professores[i].sexo == 'n') {
      homens++;
    }

    printf("Digite o titulacao:\n");
    gets(professores[i].titulacao)

  }

}
