#include <stdio.h>
#include <conio.h>

void test (char *b)
{
  printf("%c\n", b);  //prints the address of the pointer
  printf("%c\n", *b); //prints the 1 position of the string
  getche();
}

int main()
{
  char a[5];

  test(&a);
}
