#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf(" %d > %d => %d \n", 10, 2, 10>2 );
  printf(" %d > %d => %d \n", 2, 10, 2>10 );

  printf(" %d == %d => %d \n", 2, 10, 2==10 );
  printf(" %d != %d => %d \n", 2, 10, 2!=10 );

  char cmd = 'a';
  int ans = cmd == 'x';
  printf("ans: %d \n", ans );

  // &&
  // !!
  int exp1 = (12 > 10) && (2 <= 3);
  printf("exp1: %d \n", exp1 );

  int exp2 = (12 > 10) && !(2 <= 3);
  printf("exp1: %d \n", exp1 );

  return 0;
}
