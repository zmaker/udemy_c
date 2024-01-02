#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("for - break\n");
  for (int i = 0; i < 10; i++) {
    if (i == 5) break;
    printf("%d ", i);
  }
  printf("\n");

  printf("for - continue\n");
  for (int i = 0; i < 10; i++) {
    if (i == 5) {
      printf("X ");
      continue;
    }
    printf("%d ", i);
  }
  printf("\n");

  printf("while - break\n");
  int i = 0;
  while (i < 10) {
    printf("%d ", i);
    if (i == 5) break;
    i++;
  }
  printf("\n");

  printf("while - continue\n");
  i = 0;
  while (i < 10) {
    i++;
    if (i == 5) {
      printf("X ");
      continue;
    }
    printf("%d ", i);
  }
  printf("\n");


  return 0;
}
