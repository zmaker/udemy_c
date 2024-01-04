#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_fun.h"

void help(){
  printf("h - help\n");
  printf("i - inserisce un record\n");
  printf("p - stampa i record\n");
  printf("q - termina\n\n");
}

void inserisce_record(struct s_book lista[], int *libri_count){
  int i = *libri_count;
  (*libri_count) = i + 1;

  char c;
  while( (c = getchar()) != '\n' && c != EOF ) {}

  lista[i].id = i;

  char str[20];
  printf("Inserire titolo: ");
  gets(str);
  strcpy(lista[i].titolo, str);
  //printf("t: %s - %s\n", str, lista[i].titolo);

  printf("Inserire autore: ");
  gets(str);
  strcpy(lista[i].autore, str);

  printf("Inserire anno: ");
  int n;
  scanf("%d", &n);
  lista[i].anno = n;

  printf("Inserimento completato.\n");
}
void stampa_record(struct s_book lista[], int libri_count){
  if (libri_count > 0) {
    for (int i = 0; i < libri_count; i++) {
      printf("%d, %s - %s - %d\n",
             lista[i].id,
             lista[i].titolo,
             lista[i].autore,
             lista[i].anno
             );
    }
  } else {
    printf("Nessun libro\n");
  }

}
