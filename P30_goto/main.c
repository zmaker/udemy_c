#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i = 0;

  loop:
    printf("%d ", i);
    i++;
    if (i < 10) goto loop;
  printf("\n");

  return 0;
}
