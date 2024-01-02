#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num_el = 0;
  printf("num interi: ");
  scanf("%d", &num_el);

  int *ptr;
  ptr = (int *)malloc(num_el * sizeof(int));
  //calloc(num_el, sizeof(int));

  if (ptr == NULL) {
    printf("ERR: memoria non disponibile\n");
    exit(0);
  }

  for (int i = 0; i < num_el; i++) {
    *(ptr+i) = i;
  }

  for (int i = 0; i < num_el; i++) {
    printf("%d ", *(ptr+i));
  }
  printf("\n");

  //ptr = (int *)realloc(ptr, new);

  free(ptr);

  return 0;
}
