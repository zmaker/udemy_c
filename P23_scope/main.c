#include <stdio.h>
#include <stdlib.h>

//variabile globale
int n = 10;

void saluta() {
  printf("saluta: n: %d\n", n);
  int p = 10;
}

void inc(){
  static int n = 0;
  n++;
  printf("inc: n: %d\n", n);
}

int main()
{
  int n = 99;

  printf("main: n: %d\n", n);
  saluta();

  {
    int n = 88;
    printf("main2: n: %d\n", n);
  }

  inc();
  inc();
  inc();

  return 0;
}
