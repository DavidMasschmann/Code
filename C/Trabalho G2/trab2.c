#include <stdio.h>
#include <conio.h>

int main()
{

  float altura;
  int idade;

  do{
    printf("Digite a sua altura:   Ex: 1.70\n");
    scanf("%f", &altura);
  if((altura < 1.60) || (altura > 1.90))
  {
    printf("Altura invalida ou nao permitida\nDigite novamente: ");
    scanf("%f", &altura);
  }
  }while((altura < 1.60) || (altura > 1.90));

  printf("Digite a sua idade: ");
  scanf("%i", &idade);

  if (idade >= 8) {
    if ((idade >= 8) && (idade <=10)){
      printf("Sua categoria e a infantil.");
    }
    if ((idade >= 11) && (idade <=13)) {
      printf("Sua categoria e Juvenil B");
    }
    if ((idade >= 14) && (idade <= 17)){
      printf("Sua categoria e Juvenil B");
    }
    if (idade > 17) {
      printf("Sua categoria e Adulto");
    }
  } else {
    printf("Essa idade esta fora da competicao.\n");
  }
  getche();
}
