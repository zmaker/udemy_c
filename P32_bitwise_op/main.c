#include <stdio.h>
#include <stdlib.h>

int main()
{
  unsigned char A[4] = {0,1,0,1};
  unsigned char B[4] = {0,0,1,1};
  unsigned char O;

  for (int i = 0; i < 4; i++) {
    O = A[i] & B[i];  //| ^
    printf("%d %d | %d\n", A[i], B[i], O);
  }

  O = 0x01;  //0000 0001
  printf("%d \n", O);
  O = O << 1; //0000 0010
  printf("%d \n", O);
  O = O << 1; //0000 0100
  printf("%d \n", O);

  printf("SET BIT\n", O);
  O = 0x02;
  O |= (1 << 2);
  printf("%d \n", O);

  printf("RESET BIT\n", O);
  //0000 0100
  //1111 1011
  O &= ~(1 << 2);
  printf("%d \n", O);

  return 0;
}
