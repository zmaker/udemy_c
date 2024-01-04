#include <stdio.h>
#include <stdlib.h>

int f(int a, int b){
  int n = a + 2 * b;
  return n;
}


int main()
{
  int s = 0;

  for (int i = 0; i < 5; i++) {
      s += f(i, (i+1));
      printf("%d ", s);
  }
  printf("\n");
  return 0;
}
