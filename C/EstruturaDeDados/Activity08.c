#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX 10

typedef struct {
  char name[30];
}people;

typedef struct {
  int end;
  people data[MAX];
}queue;

queue* createQueue(void) {
  queue* Q = (queue*)malloc(sizeof(queue));

  if (Q != NULL) {
    printf("The queue has been created!\n\n");
    Q -> end = 0;
  }

  return Q;
}

void deleteQueue(queue* Q) {
  free(Q);
  printf("The queue has been deleted!\n\n");
}

void addQueue(queue* Q) {
  if (Q == NULL || Q -> end == MAX) {
    printf("The queue is full!\n");
  } else {
    people P;
    printf("Type the name of the person you wanna add to the queue:\n");
    fflush(stdin);
    gets(P.name);

    Q -> data[Q -> end] = P;
    Q -> end++;
    printf("Success!\n");
    sleep(1);
    system("cls");
  }
}

void removeQueue(queue* Q) {
		for(int i = 0; i < Q -> end-1; i++){
			Q -> data[i] = Q -> data[i+1];
		}

		Q -> end--;
		printf("Success!");
    sleep(1);
    system("cls");
}

void showQueue(queue* Q) {
  if (Q -> end == 0) {
    printf("The queue your were searching doesn't exist or is empty.\n");
  } else {
    for (int i = 0; i < Q -> end; i++)
    printf("%i - %s\n", i+1, Q -> data[i].name);
  }
}


int main() {
  queue* Q;
  int op = 0;

  while (op != 6) {
    printf("(1) Create queue\n(2) Delete Queue\n(3) Insert an element\n(4) Removing an element\n(5) Show queue\n(6) Exit\n");
    scanf("%i", &op);
    system("cls");

    switch (op) {
      case 1:
        Q = createQueue();
        break;

      case 2:
        deleteQueue(Q);
        break;

      case 3:
        addQueue(Q);
        break;

      case 4:
        removeQueue(Q);
        break;

      case 5:
        showQueue(Q);
        break;

      case 6:
        break;
    }
  }
}
