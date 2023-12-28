#include <stdio.h>
#include <stdlib.h>

int main()
{
  for ( int i = 0 ; i < 10 ; i++ ) {
    printf("%d ", i);
  }
  printf("\n");

  for ( int i = 0 ; i < 10 ; i = i + 2 ) {
    printf("%d ", i);
  }
  printf("\n");

  for (int i = 9; i >= 0; i--) {
    printf("%d ", i);
  }
  printf("\n");

  for ( int i = 0 ; i < 10 ; i++ ) {
    printf("%d %s\n", i, ( i%2 ? "D" : "P" ));
  }
  printf("\n");

  //for(;;);
  /*
  for (;;) {
    //
  }
  */

  return 0;
}
