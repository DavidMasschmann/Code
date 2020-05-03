#include <stdio.h>
#include <string.h>
#include <conio.h>

int main () {
  float matriz[4][5], soma=0;
  int vetor[4], l, c;

  for (l = 0; l < 4; l++) {
    for (c = 0; c < 5 ; c++) {
      printf("Informe o numero para a posicao [%i][%i]\n", l,c);
      scanf("%f", &matriz[l][c]);

      if (matriz[l][c] < 100) {
        if (c == 0) {
          soma= matriz[l][c];
        }else{
          soma= soma + matriz[l][c];
        }
      }
    }
    vetor[l]= soma;
  }

  for (l = 0; l < 4; l++) {
    printf("%i\n", vetor[l]);
  }
  getche();
}
