#include <stdio.h>
#include <stdlib.h>

#define PI_GRECO 3.14

int main()
{
  char ch = 'a';
  printf("ch: %c\t size: %d\n", ch, sizeof(ch));

  int n = 12;
  printf("n: %d\t size: %d \t %d\n", n, sizeof(n), sizeof(int));

  float f1 = 12.0;
  printf("n: %f\t size: %d \n", f1, sizeof(f1));

  double d1 = 23.3456;
  printf("n: %f\t size: %d \n", d1, sizeof(d1));

  short int n1 = 0;
  short n2 = 0;
  long int n3 = 0;
  long n4 = 0;
  printf("size short: %d \n", sizeof(n1));
  printf("size short: %d \n", sizeof(n2));
  printf("size long: %d \n", sizeof(n3));
  printf("size long: %d \n", sizeof(n4));

  long double d2;

  unsigned int un;

  const float pi = 3.14;
  printf("pi: %f %f\n", pi, PI_GRECO);

  int temp = 12;
  float nepero = 27.56F;
  long misura = 12345L;

  //0-9 ABCDEF
  int addr = 0x12FA;
  printf("addr: %d %x\n", addr, addr);

  //ottali:
  int addr2 = 012;
  printf("addr: %d \n", addr2);

  return 0;
}
