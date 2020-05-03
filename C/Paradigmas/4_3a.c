#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int Abs (int n) {
  n = abs(n);
  return n;
}

int main() {
  int num;

  for (int i = 0; i < 10; i++) {
    printf("Type a number: \n");
    scanf("%i", &num);
    num = Abs(num);
    printf("The absolute number is: %i\n", num);
  }
  getche();
}
