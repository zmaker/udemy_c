#include <stdio.h>
#include <stdlib.h>

int fat(int n) {
  if (n == 1) {
    return 1;
  } else {
    return (n * fat(n-1));
  }
}

int main() {

  // 3! = 1 * 2 * 3
  int n = fat(1);
  printf("f: %d\n", n);

  n = fat(3);
  printf("f: %d\n", n);

  n = fat(5);
  printf("f: %d\n", n);


  return 0;
}
