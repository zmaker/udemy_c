#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));

  int n = rand() % 10;
  if (n <= 5) {
    printf("MINORE di 5 (%d)\n", n);
  } else {
    printf("MAGGIORE di 5 (%d)\n", n);
  }

  return 0;
}
