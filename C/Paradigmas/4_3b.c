#include <stdio.h>
#include <conio.h>

void MaiorNumero (int num1, int num2) {
  if (num1 < num2 ) {
    printf("O maior numero e: %i\n", num2);
  } else if (num1 > num2) {
    printf("O maior numero e: %i\n", num1);
  } else {
    printf("Eles sao iguais\n");
  }
}

int main() {
  int n1, n2;

  for (int i = 0; i < 5; i++) {
    printf("Informe o par de valores: \n");
    fflush(stdin);
    scanf("%i %i", &n1, &n2);
    MaiorNumero(n1, n2);
  }

  getche();
}
