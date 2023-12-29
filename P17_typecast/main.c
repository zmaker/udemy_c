#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n = 10;
  int m = 3;
  float d = (float)n / m;

  printf("d: %f\n", d);

  long l = n;
  double dd = n;

  long L2 = 1234123412341231423142314;
  n = L2;

  return 0;
}
