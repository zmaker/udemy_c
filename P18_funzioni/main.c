#include <stdio.h>
#include <stdlib.h>

void saluto();
void somma(int, int);
int molt(int, int);

int main()
{
  int a = 100;

  saluto();
  somma(10, 20);

  int m = molt(2, 3);
  printf("m: %d\n", m);

  return 0;
}

int molt(int a, int b){
  int res = a * b;
  return res;
}

void somma(int a, int b){
  int s = a + b;
  printf("S: %d\n", s);
}

void saluto(){
  printf("hello\n");
}
