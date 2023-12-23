#include <stdio.h>
#include <stdlib.h>

int main()
{
  int anno;
  printf("Inserire anno di nascita: ");
  scanf("%d", &anno);

  printf("Anno di nascita: %d\n", anno);

  int a, b;
  printf("Inserire primo addendo: ");
  scanf("%d", &a);
  printf("Inserire secondo addendo: ");
  scanf("%d", &b);

  int somma = a + b;
  printf("%d\t+\t%d = %d\n", a, b, somma);


  return 0;
}
