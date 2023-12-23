#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x, y, z;
  x = y = z = 0;

  x = 12;
  y = 23;
  z = 35;

  int somma, dif, molt, div;
  somma = x+y;
  dif   = x-y;
  molt  = x*y;
  div   = z/x;

  printf("%8d %8d %8d %8d\n", somma, dif, molt, div);

  // 10/2 = 5   0
  // 11/2 = 5.5 1
  printf("%5d / %5d RESTO=%d\n", 10, 2, (10%2));
  printf("%5d / %5d RESTO=%d\n", 11, 2, (11%2));

  int i = 0;
  printf("1. %3d\n", i);
  i = i + 1;
  printf("2. %3d\n", i);
  i++;
  printf("3. %3d\n", i);
  printf("4. %3d\n", i++);
  printf("4b. %3d\n", i);
  printf("5. %3d\n", ++i);
  printf("5b. %3d\n", i);

  printf("6. %3d\n", i--);
  printf("6b. %3d\n", i);
  printf("6. %3d\n", --i);
  printf("6b. %3d\n", i);


  return 0;
}
