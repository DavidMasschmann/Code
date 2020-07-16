#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int abso (int n) {
  int result;
  result = abs(n);
  return (result);
}

int main() {

  int n1, n2, n3, n4, n5;

  printf("Digite 5 numeros, apertando ENTER depois de cada um:\n");
  scanf("%i", &n1);
  scanf("%i", &n2);
  scanf("%i", &n3);
  scanf("%i", &n4);
  scanf("%i", &n5);

  printf("Os valores absolutos sao: 1:%i 2:%i 3:%i 4:%i 5:%i\n", abso(n1), abso(n2), abso(n3), abso(n4), abso(n5));

  getche();
}
