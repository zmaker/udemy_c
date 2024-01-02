#include <stdio.h>
#include <stdlib.h>

struct point {
  int x;
  int y;
};

void printp(struct point P){
  printf("P: %d, %d\n", P.x, P.y);
}

void resetP(struct point *P){
  (*P).x = 0;
  (*P).y = 0;
}

void setP(struct point *P){
  P->x = 10;
  P->y = 10;
}

int main()
{
  struct point A, B;

  A.x = 10;
  A.y = 12;

  printp(A);

  resetP(&B);
  printp(B);
  setP(&B);
  printp(B);

  return 0;
}
