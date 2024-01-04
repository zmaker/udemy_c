#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *f;

  //creazione file
  f = fopen("./dati.txt", "w");

  if (f == NULL) {
    printf("errore file\n");
    exit(1);
  }
  int n = 123;
  fprintf(f, "%d", n);
  fprintf(f, "%s", "hellofile!");
  fclose(f);

  getchar();
  return 0;
}
