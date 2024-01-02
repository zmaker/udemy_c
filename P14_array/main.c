#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num[10];
  num[0] = 12;
  num[2] = 33;
  printf("%d\n", num[2]);

  int num2[5] = { 2, 34, 45, 56, 67 };

  for (int i = 0; i < 5; i++) {
    printf("%d ", num2[i]);
  }
  printf("\n");

  int list[5];
  for (int i = 0; i < 5; i++) {
    printf("%d ", list[i]);
  }
  printf("\n");

  for (int i = 0; i < 5; i++) {
    list[i] = 0;
  }
  for (int i = 0; i < 5; i++) {
    printf("%d ", list[i]);
  }
  printf("\n");

  for (int i = 0; i < 5; i++) {
    list[i] = (i+1)*(i+1);
    printf("%d ", list[i]);
  }
  printf("\n");


  return 0;
}
