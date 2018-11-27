#include <stdio.h>
#include <conio.h>

int main()
{
	int idade, count;
	float altura, media, soma;
	char resposta;

	do {
  	printf("Digite a idade: \n");
  	scanf("%d",&idade);
  	printf("Digite a altura: ");
  	scanf("%f",&altura);
  	printf("Deseja informar mais dados? (S) Sim (N) Nao\n");
  	fflush(stdin);
  	scanf("%c",&resposta);
		soma = soma+altura;
    count++;
	} while ((resposta!='N') && (resposta!='n'));

	if (idade>30)
		media = soma/count;
		printf("A media de altura de pessoas com mais de 30 anos e: %.2f",media);

    getche();
}
