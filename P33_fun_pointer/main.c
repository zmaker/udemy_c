#include <stdio.h>
#include <stdlib.h>

int somma(int a, int b);
int prod(int a, int b);

int main(){

  int (*p)(int a, int b);
  int n, m;
  int cmd;

  do {
    printf("n1: ");
    scanf("%d", &n);
    printf("n2: ");
    scanf("%d", &m);
    printf("\nsomma o molt? (1/2): ");
    scanf("%d", &cmd);

    if (cmd == 1) {
      p = somma;
    } else {
      p = prod;
    }

    int res = (*p)(n, m);
    printf("res: %d\n", res);

    printf("\nancora? (1=si/0=no): ");
    scanf("%d", &cmd);
    getchar();

  } while (cmd != 0);


  return 0;
}

int somma(int a, int b){
  return a + b;
}

int prod(int a, int b){
  return a * b;
}
