#include <stdio.h>
#include <string.h>
#include <conio.h>

struct info
{
  int codigo, numero;
  char nome[50], endereco[50], email[50];
};

int main()
{
  struct info clientes[40];
  int x, i, choice, numero_de_clientes=0, pesquisa_codigo;
  char pesquisa[50], sn;

  do {
    printf("========Cadastro de Clientes========\n");
    printf("Escolha uma opcao:\n");
    printf("1 - Incluir\n");
    printf("2 - Alterar dados por codigo\n");
    printf("3 - Consultar por nome\n");
    printf("4 - Listar\n");
    printf("=>\n");
    scanf("%i", &choice);

    switch (choice) {
      case 1:
        do {
          printf("Esreva o nome do cliente: \n");
          fflush(stdin);
          gets(clientes[numero_de_clientes].nome);

          printf("Digite o e-mail do cliente: \n");
          fflush(stdin);
          gets(clientes[numero_de_clientes].email);

          printf("Digite o numero do cliente: \n");
          fflush(stdin);
          scanf("%i", &clientes[numero_de_clientes].numero);

          printf("Digite o endereco do cliente: \n");
          fflush(stdin);
          gets(clientes[numero_de_clientes].endereco);

          numero_de_clientes++;
          do {
            printf("Deseja continuar cadastrando? s/n\n");
            fflush(stdin);
            scanf("%c", &sn);
            if (((sn != 'S') && (sn != 's')) && ((sn != 'N') && (sn != 'n'))) {
              printf("Resposta invalida, tente novamente: \n");
            }
          } while(((sn != 'S') && (sn != 's')) && ((sn != 'N') && (sn != 'n')));
        } while (((sn == 'S') || (sn == 's')) && (numero_de_clientes < 40));
        break;

      case 2:
       printf("Digite o codigo do cliente que deseja alterar: \n");
       fflush(stdin);
       scanf("%i", &pesquisa_codigo);
       for (i = 0; i < numero_de_clientes; i++) {
         if (pesquisa_codigo == clientes[i].codigo) {
           pesquisa_codigo = 0;
           printf("Qual dado deseja mudar?\n");
           printf("1 - Nome\n");
           printf("2 - E-mail\n");
           printf("3 - Numero\n");
           printf("4 - Endereco\n");
           scanf("%i", &pesquisa_codigo);

           switch (pesquisa_codigo) {
             case 1:
              printf("Digite o novo nome: \n");
              fflush(stdin);
              gets(clientes[i].nome);
              printf("Alteracao feita com sucesso\n");
              break;
             case 2:
              printf("Digite o novo e-mail: \n");
              fflush(stdin);
              gets(clientes[i].email);
              printf("Alteracao feita com sucesso\n");
              break;
             case 3:
              printf("Digite o novo numero: \n");
              fflush(stdin);
              scanf("%i", &clientes[i].numero);
              printf("Alteracao feita com sucesso\n");
              break;
             case 4:
              printf("Digite o novo endereco: \n");
              fflush(stdin);
              gets(clientes[i].endereco);
              printf("Alteracao feita com sucesso\n");
              break;
           }
         }
       }
       break;

      case 3:
       printf("Digite o nome do cliente: \n");
       fflush(stdin);
       gets(pesquisa);

       for (i = 0; i < numero_de_clientes; i++) {
         if (strcmp(pesquisa, clientes[i].nome) == 0) {
           printf("Codigo: %i \n", clientes[i].codigo);
           printf("Nome: %s \n", clientes[i].nome);
           printf("Endereco: %s \n", clientes[i].endereco);
           printf("Telefone: %i \n", clientes[i].numero);
           printf("E-mail: %s \n", clientes[i].email);
           break;
         }
         break;
       }
        if (strcmp(pesquisa, clientes[i].nome) != 0) {
          printf("Cliente nao encontrado\n");
          break;
        }
        break;

      case 4:
       for (i = 0; i < numero_de_clientes; i++) {
         printf("========================\n");
         printf("Codigo: %i \n", clientes[i].codigo);
         printf("Nome: %s \n", clientes[i].nome);
         printf("Endereco: %s \n", clientes[i].endereco);
         printf("Telefone: %i \n", clientes[i].numero);
         printf("E-mail: %s \n", clientes[i].email);
         printf("========================\n");
        }
      break;
    }
  } while(0 == 0);
  getche();
}
