#include <stdio.h>
#include <stdlib.h>

int main()
{
  int sum = 0;

  for (int i = 0; i < 3; i++) {
    int ans = 0;
    printf("dammi un addendo: ");
    scanf("%d", &ans);

    sum = sum + ans;
  }
  printf("somma: %d\n", sum);
  return 0;
}
