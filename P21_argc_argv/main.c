#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  printf("num di parametri: %d\n", argc);
  for (int i = 0; i < argc; i++) {

    printf("%d) %s\n", i, argv[i]);
  }

  return 0;
}
