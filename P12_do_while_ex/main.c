#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, m;
  char cmd;
  do {

    printf("n1: ");
    scanf("%d", &n);
    printf("n2: ");
    scanf("%d", &m);
    int s = n+m;
    printf("somma: %d\n", s);

    char c;
    while((c = getchar()) != '\n' && c != EOF) {}

    printf("ancora (s/n)? ");
    scanf("%c", &cmd);

  } while ( cmd == 's' );

  return 0;
}
