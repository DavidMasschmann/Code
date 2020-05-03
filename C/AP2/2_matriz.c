#include <stdio.h>
#include <string.h>
#include <conio.h>

int main () {
  char nomes[3];
  float media[3], maior=0, menor=0;
  int i=0;

  for (i = 0; i < 3; i++) {
    printf("Digite o nome do aluno %i: \n", i+);
    gets(nomes[i]);
    printf("Digite a media do aluno %i: \n", i+1);
  }
}
