#include <stdio.h>
#include <conio.h>

void troca(char *c1, char *c2) {

  char aux;

  aux = *c1;
  *c1 = *c2;
  *c2 = aux;
}

int main() {

  char c1, c2;

  printf("Digite uma letra:\n");
  fflush(stdin);
  scanf("%c", &c1);

  printf("Digite uma letra:\n");
  fflush(stdin);
  scanf("%c", &c2);

  troca (&c1, &c2);

  printf("%c\n", c1);
  printf("%c\n", c2);

  getche();
}
