#include <stdio.h>
#include <conio.h>

int main () {
  char g[20], r[20];
  int i, q, acerto=0;

  for (i = 0; i < 2; i++) {
    printf("\nDigite a resposta para a questao %i:", i+1);
    scanf("%c", &g[i]);
    fflush(stdin);
  }

  for (i = 0; i < 30; i++) {
    for (q = 0; q < 20; q++) {
        printf("\nDigite a resposta do aluno %i para a questao %i:", i+1, q+1);
        scanf("%c",&r[q]);
        fflush(stdin);

        if (r[q] == g[q]) {
          acerto++;
        }
    }
    if (acerto >= 12) {
      printf("O aluno acertou: %i\n", acerto);
      printf("O aluno %i esta: APROVADO\n", i+1);
    } else {
      printf("O aluno acertou: %i\n", acerto);
      printf("O aluno %i esta: REPROVADO\n", i+1);
    }

    acerto=0;
  }
}
