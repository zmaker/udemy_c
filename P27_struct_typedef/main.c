#include <stdio.h>
#include <stdlib.h>

typedef struct _apt {
  int interno;
} apt;

typedef struct _addr {
  char via[20];
  char citta[30];
  int zip;

  int numeri[10];

  apt appartamenti[10];
} addr;

int main()
{

  addr indirizzo2;
  addr mio_indirizzo;

  indirizzo2.zip = 1234;
  indirizzo2.appartamenti[0].interno = 12;

  return 0;
}
