#include <stdio.h>
#include <conio.h>

int main() {
  int array[4][4] = {0};
  char menu;
  int exit = 0;

  do {
    printf("A - Add element\n");
    printf("R - Remove element\n");
    printf("C - Clean array\n");
    printf("S - Show array\n");
    printf("E - Exit\n\n");

    do {
      printf("Select an option of the menu\n");
      fflush(stdin);
      scanf("%c", &menu);

      if ((menu != 'A') && (menu != 'R') && (menu != 'C') && (menu != 'S') && (menu != 'E')) {
        printf("Invalid option\n");
      }
    } while((menu != 'A') && (menu != 'R') && (menu != 'C') && (menu != 'S') && (menu != 'E'));

    switch (menu) {
      case 'A': {
        int roll, column, value;

        do {
          printf("Enter the column and the roll and the value you wanna assign to this position: \n");
          scanf("%i %i %i", &column, &roll, &value);
          printf("\n");

          if (((column < 0) || (column > 3)) || ((roll < 0) || (roll > 3))) {
            printf("Column or roll invalid, type a number between 0-3.\n");
          }
        } while(((column < 0) || (column > 3)) || ((roll < 0) || (roll > 3)));


        if (array[roll][column] != 0) {
          printf("This array space is already filled with %i, and this number "
          "will be replaced by the new you just typed.\n\n", array[column][roll]);
        }

        array[roll][column] = value;

        break;
      }

      case 'R': {
        int roll, column;

        do {
          printf("Enter the column and the roll and the value in this position will be erased: \n");
          scanf("%i %i", &column, &roll);
          printf("\n");

          if (((column < 0) || (column > 3)) || ((roll < 0) || (roll > 3))) {
            printf("Column or roll invalid, type a number between 0-3.\n");
          }
        } while(((column < 0) || (column > 3)) || ((roll < 0) || (roll > 3)));

        array[roll][column] = 0;

        break;
      }

      case 'C':
        for (int i = 0; i < 4; i++) {
          for (int j = 0; j < 4; j++) {
            array[i][j] = 0;
          }
        }
        printf("\n");
        break;

      case 'S':
      for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
          printf(" %i ", array[i][j]);
        }
        printf("\n\n");
      }

        break;

      case 'E':
        exit = 1;
        break;
    }

  } while(exit == 0);
  getche();
}
