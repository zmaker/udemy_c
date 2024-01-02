#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n = 123;
  int *p = &n;
  printf("addr: %p\n", p);
  printf("valore: %d\n", *p);

  (*p) = 567;
  printf("valore: %d\n", *p);

  int *p2;
  p2 = p;
  printf("addr: %p\n", p2);
  printf("valore: %d\n", *p2);

  int num[5] = {12,23,34,45,56};
  int *pa = num;
  printf("1: %d %p\n", *pa, pa);
  pa++;
  printf("2: %d %p\n", *pa, pa);
  pa++;
  printf("3: %d %p\n", *pa, pa);

  return 0;
}
