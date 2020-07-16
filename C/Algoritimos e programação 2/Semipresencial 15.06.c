// INCOMPLETE

#include <stdio.h>
#include <string.h>
#include <conio.h>

struct cadastro
{
  char nome[30];
  char marca[30];
  char placa[8];
  int ano;
};

void cadastro(struct cadastro carros[100], int *carros_emEstoque)
{
  char sn;

  do
  {
    printf("Esreva o nome do carro: \n");
    fflush(stdin);
    gets(carros[carros_emEstoque].nome);

    printf("Digite a marca do carro: \n");
    fflush(stdin);
    gets(carros[carros_emEstoque].marca);

    printf("Digite a placa do carro: \n");
    fflush(stdin);
    gets(carros[carros_emEstoque].placa);

    printf("Digite o ano do carro: \n");
    fflush(stdin);
    scanf("%i", &carros[carros_emEstoque].ano);

    carros_emEstoque++;
    do
    {
      printf("Deseja continuar cadastrando carros? s/n\n");
      fflush(stdin);
      scanf("%c", &sn);
      if (((sn != 'S') && (sn != 's')) && ((sn != 'N') && (sn != 'n')))
      {
        printf("Resposta invalida, tente novamente: \n");
      }
    } while(((sn != 'S') && (sn != 's')) && ((sn != 'N') && (sn != 'n')));
  } while (((sn == 'S') || (sn == 's')) && (carros_emEstoque < 100));
  return 0;
}

int main()
{
  struct cadastro carros[100];
  char pesquisa[8];
  int carros_emEstoque=0, choice=0, ano, quit=0, i;

  do {
    printf("========Cadastro de Carros========\n");
    printf("Escolha uma opcao:\n");
    printf("1 - Incluir Carro\n");
    printf("2 - Consultar Carro por placa\n");
    printf("3 - Exibir Carros por ano\n");
    printf("4 - Sair\n");
    printf("==================================\n");
    scanf("%i", &choice);

    switch (choice)
    {
      case 1:

      break;

      case 2:
        printf("Digite a placa do carro: \n");
        fflush(stdin);
        gets(pesquisa);

        for (i = 0; i < carros_emEstoque; i++)
        {
          if (strcmp(pesquisa, carros[i].placa) == 0)
          {
            break;
          }
        }

        if (strcmp(pesquisa, carros[i].placa) == 0)
        {
          printf("Nome: %s \n", carros[i].nome);
          printf("Marca: %s \n", carros[i].marca);
          printf("Placa: %s \n", carros[i].placa);
          printf("Ano: %i \n", carros[i].ano);
          printf("--------------------\n");
          break;
        }
        else
        {
          printf("Carro nao encontrado\n");
          printf("----------X---------\n");
          break;
        }

      case 3:
        printf("Digite o ano desejado:\n");
        fflush(stdin);
        scanf("%i", &ano);

        for (i = 0; i < carros_emEstoque; i++)
        {
          if (carros[i].ano == ano)
          {
            printf("Nome: %s \n", carros[i].nome);
            printf("Marca: %s \n", carros[i].marca);
            printf("Placa: %s \n", carros[i].placa);
            printf("--------------------\n");
          }
        }
        break;

      case 4:
        quit = 1;
        break;
    }
  } while(quit == 0);
}
