#include <stdio.h>
#include <stdlib.h>

enum giorniw {lun, mar, mer, gio, ven, sab, dom};
enum mesi {gen=1, feb, marz};

char label[7][10] = {"lun", "mar", "mer", "gio", "ven", "sab", "dom"};

int main() {

  enum giorniw dd;
  dd = lun;

  if (dd == lun) printf("lunedi'! %d \n", lun);

  enum mesi mm;
  mm = gen;
  printf("%d \n", mm);

  switch (dd){
  case lun:
    printf("lun\n");
    break;
  case mar:
    printf("mar\n");
    break;

  }

  printf("%s\n", label[dd]);

  return 0;
}
