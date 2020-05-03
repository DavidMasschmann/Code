#include <stdio.h>
#include <conio.h>

int main() {
  int i;
  float temperatura[7], maiorQueMedia[7], media;

  for (i = 0; i < 7; i++) {
    printf("Qual a temperatura de hoje? \n");
    scanf("%f", &temperatura[i]);

    if (i == 0) {
      media = temperatura[i];
    } else {
      media += temperatura[i];
    }
  }

  media = media/7;

  for (i = 0; i < 7; i++) {
    if (temperatura[i] > media) {
      printf( "%.2f e maior que a media\n", temperatura[i]);
    }
  }

  getche();
}
