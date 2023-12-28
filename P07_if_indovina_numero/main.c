#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));

  int n = rand() % 10;

  printf("Che numero ho pensato (0-9)? ");
  int ans;
  scanf("%d", &ans);

  if (ans == n) {
    printf("ESATTO il numero e' (%d)\n", n);
  } else {
    printf("ERRATO il numero e' (%d)\n", n);
  }

  return 0;
}
