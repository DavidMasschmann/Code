#include <stdio.h>
#include <conio.h>

void PrintL(int L[10]) {
  for (int i = 0; i < 10; i++) {
    printf("    %i: ----- %i\n", i, L[i]);
  }
  printf("------------------------\n");
}

int main() {
  int L[10] = {9,3,8,6};
  int n = 4;

  L[n] = 7;
  n++;
  PrintL(L);

  for (int i = 0; i < n; i++) {
    L[i] = L[i+1];
  }
  n--;
  PrintL(L);

  for (int i = 0; i < n; i++) {
    if (L[i] == 8) {
      for (;i < n; i++) {
        L[i] = L[i+1];
      }
    }
  }
  PrintL(L);

  for (int i = n; i >= 0; i--) {
    L[i] = L[i-1];
  }
  L[0] = -4;
  PrintL(L);

  for (int i = 2;i < n; i++) {
    L[i] = L[i+1];
  }
  n--;
  PrintL(L);

  getche();
}
