#include <stdio.h>
#include<conio.h>

int main()
{
  float valor_venda=0, soma=0, media=0, maior_venda=0;
  int count;
  char resposta;

  do {
    printf("Digite o valor da venda:\n");
    scanf("%f", &valor_venda);

    count++;
    soma= soma+valor_venda;

    if (valor_venda > maior_venda) {
      maior_venda= valor_venda;
    }

    do {
      printf("Outra venda? (s/n)\n");
      fflush(stdin);
      scanf("%c", &resposta);
      if ((resposta !='s') && (resposta != 'n')){
        printf("Digite novamente, e responda somente com 's' ou 'n'\n");
      }
    } while((resposta !='s') && (resposta !='n'));

  } while((resposta == 's') && (count < 2));

  media= soma/count;
  printf("O numero de vendas realizadas foi:%i\n", count);
  printf("O valor media das vendas de hoje foi:%.2f\n", soma);
  printf("O valor da maior venda de hoje foi:%.2f", maior_venda);

  getche();

}
