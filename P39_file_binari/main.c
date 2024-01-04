#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *f;
  f = fopen("./dati.bin", "wb+");
  if (f == NULL) {
    printf("ERER FILE\n");
    exit(1);
  }

  int num[5] = {12,23,34,45,56};
  fwrite(&num, sizeof(int), 5, f);

  printf("scritti: %d\n", ftell(f));
  rewind(f);

  int ans[5];
  fread(&ans, sizeof(int), 5, f);

  for (int i = 0; i < 5; i++) {
    printf("%d ", ans[i]);
  }
  printf("\n");

  fclose(f);
  getchar();
  return 0;
}
