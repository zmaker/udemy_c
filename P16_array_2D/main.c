#include <stdio.h>
#include <stdlib.h>

int main()
{
  int matr[3][4];
  matr[0][0] = 12;
  printf("%d\n", matr[0][0]);

  int tab[3][4] = {
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0}
  };

  for (int r = 0; r < 3; r++) {
    for (int c = 0; c < 4; c++) {
      matr[r][c] = 0;
    }
  }

  for (int r = 0; r < 3; r++) {
    for (int c = 0; c < 4; c++) {
      printf("%3d", matr[r][c]);
    }
    printf("\n");
  }


  return 0;
}
