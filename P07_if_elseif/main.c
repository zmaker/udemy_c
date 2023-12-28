#include <stdio.h>
#include <stdlib.h>

int main() {

  int temp;
  printf("che temperatura (0-100)? ");
  scanf("%d", &temp);

  if (temp < 10) {
    printf("che freddo!\n");
  } else if ( (temp >= 10) && (temp < 20) ) {
    printf("freddino.\n");
  } else if ( (temp >= 20) && (temp < 30) ) {
    printf("ok\n");
  } else {
    printf("che caldo\n");
  }

  return 0;
}
