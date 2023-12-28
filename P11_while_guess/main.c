#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));
  int segreto = (rand() % 6) + 1;
  int ans = 0;

  while (ans != segreto) {
    printf("che numero? ");
    scanf("%d", &ans);

    if (ans == segreto) {
      printf("OK!\n");
    } else {
      printf("riprova\n");
    }
  }

  return 0;
}
