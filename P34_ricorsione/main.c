#include <stdio.h>
#include <stdlib.h>

int f(int n){
  printf("%d ", n);
  if (n == 0) {
    printf("\n\n");
    return 0;
  } else {
    return f(n-1);
  }
}

int sr(int n){
  if (n <= 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    return (n + sr(n-1));
  }
}

int main(void) {

  //caso base:
  f(0);
  // chiamata generica: 5 4 3 2 1 0
  f(5);

  //sr(1) : 1
  int n = sr(1);
  printf("n: %d\n", n);
  //sr(3) : 1 + 2 + 3
  n = sr(3);
  printf("n: %d\n", n);

	return 0;
}

