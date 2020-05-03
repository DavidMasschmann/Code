#include <stdio.h>
#include <conio.h>

int somatorio(int valor) {
  if(valor == 1){
    return (1);
  }else{
    return (valor + somatorio(valor-1));
  }
}

void lePositivo() {
  int numeros[5], i;

  printf("Digite os 5 valores.\n");

  for (i = 0; i < 5; i++) {
    do {
      scanf("%i",&numeros[i]);

      if(numeros[i] <= 0){
       printf("Entre novamente com um valor POSITIVO.\n");
      }
    } while (numeros[i] <= 0);

    printf("O somatorio de %i ate 1 e %i\n", numeros[i], somatorio(numeros[i]));
  }
}

int main() {

  lePositivo();

  getche();
}
