#include <stdio.h>
#include <stdlib.h>

void prta(int n[10]) {
  for (int i = 0; i < 10; i++) {
    printf("%d ", n[i]);
  }
  printf("\n");
}

void prta2(int n[]) {
  for (int i = 0; i < 10; i++) {
    printf("%d ", n[i]);
  }
  printf("\n");
}

void prta3(int *n) {
  for (int i = 0; i < 10; i++) {
    printf("%d ", n[i]);
  }
  printf("\n");
}

void clra(int n[]){
  for (int i = 0; i < 10; i++) n[i] = 0;
}

void saluta (char nome[]){
  printf("Ciao, %s\n", nome);
}

int main()
{
  int n[10];

  //reset array
  clra(n);

  //stampa l'array
  prta(n);
  prta2(n);
  prta3(n);

  saluta("Mario");

  return 0;
}
