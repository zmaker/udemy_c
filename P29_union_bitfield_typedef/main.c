#include <stdio.h>
#include <stdlib.h>

union mixed {
  unsigned int n;
  unsigned char b[4];
};

struct reg {
  unsigned DIR : 1;
  unsigned ENA : 1;
  unsigned STP : 1;
  unsigned payload : 4;
  unsigned CRC : 1;
};

typedef int intero;

int main()
{
  union mixed n;
  n.n = 1234;

  printf("%d %d %d %d\n", n.b[3], n.b[2], n.b[1], n.b[0]);

  n.b[0] = 0x01;
  n.b[1] = 0x01;
  n.b[2] = 0;
  n.b[3] = 0;

  printf("%d\n", n.n);

  struct reg driver;
  driver.DIR = 1;
  driver.ENA = 0;

  printf("%d %d\n", driver.DIR, driver.ENA);

  intero numero;
  numero = 3;
  printf("intero: %d \n", numero);

  return 0;
}
