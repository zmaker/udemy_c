#include <stdio.h>
#include <stdlib.h>
#include "my_fun.h"

struct s_book libri[10];

int main()
{
    printf("Archivio libri\n");
    help();

    libri_inseriti = 0;

    int LOOP = 1;
    do {
      char cmd = getchar();

      switch(cmd){
      case 'q':
        LOOP = 0;
        break;
      case 'h':
        help();
        break;
      case 'i':
        inserisce_record(libri, &libri_inseriti);
        break;
      case 'p':
        stampa_record(libri, libri_inseriti);
        break;
      }

      char c;
      while( (c = getchar()) != '\n' && c != EOF ) {}

    } while(LOOP);

    printf("Grazie!\n");

    return 0;
}
