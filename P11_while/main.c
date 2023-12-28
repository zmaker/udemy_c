#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));

  int n = rand() % 10;

  //while (!n) {
  while (n != 0) {
    n = rand() % 10;
    printf("%d ", n);
  }
  printf("\n");

  int i = 0;
  while (i < 10) {
    printf("%d ", i);
    i++;
  }
  printf("\n");

  return 0;
}
