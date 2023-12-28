#include <stdio.h>
#include <stdlib.h>

int main() {

  int n = 0;
  do {
    printf("n: ");
    scanf("%d", &n);
  } while (n > 10);

  printf("end\n");

  return 0;
}
