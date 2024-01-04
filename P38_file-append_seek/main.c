#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *f;

  f = fopen("./dati.txt", "w");
  if (f == NULL) {
    printf("Err file\n");
    exit(1);
  }
  fprintf(f, "%s", "hellofile!");
  fclose(f);

  f = fopen("./dati.txt", "a+");
  if (f == NULL) {
    printf("Err file\n");
    exit(1);
  }
  fprintf(f, "%s", "123456");

  //posizione?
  printf("pos: %d\n", ftell(f));

  fseek(f, 0, SEEK_SET);

  printf("pos: %d\n", ftell(f));

  char c;
  fscanf(f,"%c", &c);
  printf("C: %c\n", c);

  fclose(f);


  getchar();
  return 0;
}
