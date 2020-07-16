#include <stdio.h>
#include <conio.h>

void ClassificaDupla (int *n1, int *n2) {

  int aux;

  if (*n1 > *n2) {
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
  }
}

int main() {

  int n1, n2;

  for (int i = 0; i < 10; i++) {
    printf("informe uma dupla de valores:\n");
    fflush(stdin);
    scanf("%i %i", &n1, &n2);

    ClassificaDupla(&n1, &n2);

    printf("A dupla em ordem crescente e: %i %i \n", n1, n2);
  }
  getche();
}
