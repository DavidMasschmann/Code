#include<stdio.h>
#include<string.h>
#include <conio.h>

struct vehicle{
	char plate[10];
	char model[20];
	char color[20];
};

int main() {
  char array[3][3], x=0, numberOfCars = 0;
  struct vehicle cars[20];
  char op;

  do {
    printf("\nA - Add vehicle\nR - Remove vehicle\nC - Clear parking lot\nS - Show parking lot\nE - Exit\n\n");

    do {
      printf("Select an option of the menu\n");
      fflush(stdin);
      scanf("%c", &op);

      if ((menu != 'A') && (menu != 'R') && (menu != 'C') && (menu != 'S') && (menu != 'E')) {
        printf("Invalid option\n");
      }
    } while((menu != 'A') && (menu != 'R') && (menu != 'C') && (menu != 'S') && (menu != 'E'));

		switch(op){
			case 'A': {
        int roll, column;

        do {
          printf("Enter the column and the roll that you wanna put your car: \n");
          scanf("%i %i", &column, &roll,);
          printf("\n");

          if (((column < 0) || (column > 3)) || ((roll < 0) || (roll > 3))) {
            printf("Column or roll invalid, type a number between 0-3.\n");
          }
        } while(((column < 0) || (column > 3)) || ((roll < 0) || (roll > 3)));

        printf("-- Type the info about your car: \n");
        printf("License plate: \n");
        gets(cars[numberOfCars].plate);
        printf("Model: \n");
        gets(cars[numberOfCars].model);
        printf("Color: \n");
        gets(cars[numberOfCars].color)


        if (array[roll][column] != 0) {
          printf("This space is already filled, and this car "
          "will be replaced by the new you just typed.\n\n");
        }

        array[roll][column] = cars[numberOfCars].plate;
        numberOfCars++;
        break;
      }

			case 'R': {
        int roll, column;

				do{
          printf("Enter the column and the roll that you wanna remove: \n");
          scanf("%i %i", &column, &roll,);

          if (((column < 0) || (column > 3)) || ((roll < 0) || (roll > 3))) {
            printf("Column or roll invalid, type a number between 0-3.\n");
          }
        } while(((column < 0) || (column > 3)) || ((roll < 0) || (roll > 3)));

				array[roll][column] = 0;
				break;
      }

			case 'C':
				for(int i = 0; i < 4; i++)
						for(int j = 0; j < 4; j++)
							array[i][j] = 0;
				break;

			case 'S':
				printf(" Parking lot:\n");
				for(int i = 0; i < 4; i++)
					for(int j = 0; j < 4; j++)
						printf("%s",array[i][j]);
				break;

			case 'E':
				printf("\nClosing");
				x=1;
				break;
		}
	}while(x == 0);
}
