#include <stdio.h>
#include <conio.h>

int main () {
  int i, a, par[5], impar[5], ipar=0, iimpar=0, num;

  for (i = 0; i < 30; i++) {
    scanf("%i", &num);

    if (num %2 == 0) {
      par[ipar]= num;
      ipar++;
    } else {
      impar[iimpar]= num;
      iimpar++;
    }

    if (iimpar >= 5) {
      iimpar=0;

      for (a = 0; a < 5; a++)
        printf("%i", impar[a]);

      printf("\n");
    }

    if (ipar >= 5) {
      ipar=0;

      for (a = 0; a < 5; a++)
        printf("%i", par[a]);

      printf("\n");

    }
  }

  for (a = 0; a < iimpar; a++)
    printf("%i", impar[a]);

  printf("\n");

  for (a = 0; a < ipar; a++)
      printf("%i", par[a]);

  getche();
}
