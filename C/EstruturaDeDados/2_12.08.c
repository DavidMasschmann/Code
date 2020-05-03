#include <stdio.h>
#include <conio.h>

int main() {
  float reais[5];
  int i, codigo;

  for (i = 0; i < 5; i++) {
    printf("Digite um numero: \n");
    scanf("%f", &reais[i]);
  }

  printf("Digite o codigo: \n0-fecha\n 1-mostra na ordem direta \n 2-mostra na ondem reversa \n");
  scanf("%i", &codigo);

  switch (codigo) {
    case 0:
      break;
    case 1:
      for (i = 0; i < 5; i++) {
        printf("%f\n", reais[i]);
      }
      break;
    case 2:
    for (i = 4; i >= 0; i--) {
      printf("%f\n", reais[i]);
    }
    break;
  }
  getche();
}
