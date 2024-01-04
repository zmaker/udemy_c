#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *f;

  f = fopen("./dati.txt", "r");
  if (f == NULL) {
    printf("Err file\n");
    exit(1);
  }
  int n;
  fscanf(f, "%d", &n);
  printf("n: %d\n", n);

  char str[20];
  fscanf(f, "%s", str);
  printf("s: %s\n", str);

  fclose(f);

  //lettura continua
  f = fopen("./testo.txt", "r");
  if (f == NULL) {
    printf("Err file\n");
    exit(1);
  }
  char ch;
  while( (ch = fgetc(f)) != EOF ) {
    putchar(ch);
  }
  fclose(f);

  getchar();
  return 0;
}
