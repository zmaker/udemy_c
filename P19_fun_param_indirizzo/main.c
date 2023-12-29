#include <stdio.h>
#include <stdlib.h>

void scambia(int, int);
void scambia2(int*, int*);

int main()
{
  int n = 3;
  int m = 5;

  printf("1. a: %d b: %d\n", n, m);
  scambia(n, m);
  printf("2. a: %d b: %d\n", n, m);

  printf("3. a: %d b: %d\n", n, m);
  scambia2(&n, &m);
  printf("4. a: %d b: %d\n", n, m);

  return 0;
}

void scambia2(int *a, int *b){
  int t = *a;
  *a = *b;
  *b = t;
  printf("x. a: %d b: %d\n", *a, *b);
}

void scambia(int a, int b){
  int t = a;
  a = b;
  b = t;
  printf("i. a: %d b: %d\n", a, b);
}
