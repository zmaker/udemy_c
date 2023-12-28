#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("Menu'\n");
  printf("t - taglia\n");
  printf("c - copia\n");
  printf("n - nuovo\n");
  printf("r - restart\n");
  printf("Scegli l'operazione: ");
  char cmd;
  scanf("%c", &cmd);

  printf("comando: %c\n", cmd);

  switch (cmd) {
  case 't':
    printf("tagliato!\n");
    break;
  case 'c':
    printf("copiato!\n");
    break;
  case 'n':
  case 'r':
    {
      int n = 0;
      printf("nuovo!\n");
    }
    break;
  default:
    printf("comando non riconosciuto\n");
    break;
  }

  return 0;
}
