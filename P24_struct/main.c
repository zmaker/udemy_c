#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct addr {
  char nome[20];
  char cognome[20];
  int dd;
  int mm;
  int yy;
} indirizzo2;

int main()
{
  struct addr indirizzo1;
  strcpy(indirizzo1.nome, "Mario");
  strcpy(indirizzo1.cognome, "Rossi");
  indirizzo1.dd = 1;
  indirizzo1.mm = 2;
  indirizzo1.yy = 2003;

  printf("%s %s, nato il %d/%d/%d\n",
         indirizzo1.nome,
         indirizzo1.cognome,
         indirizzo1.dd, indirizzo1.mm, indirizzo1.yy
         );

  indirizzo2.dd = 2;

  struct addr ind3 = {"Luigi", "Bianchi", 12, 12, 1960};
  printf("%s %s, nato il %d/%d/%d\n",
         ind3.nome,
         ind3.cognome,
         ind3.dd, ind3.mm, ind3.yy
         );

  struct addr lista[10];
  strcpy(lista[0].nome, "Paolo");
  strcpy(lista[0].cognome, "Verdi");
  lista[0].dd = 3;
  lista[0].mm = 6;
  lista[0].yy = 2012;

  printf("%s %s, nato il %d/%d/%d\n",
         lista[0].nome,
         lista[0].cognome,
         lista[0].dd, lista[0].mm, lista[0].yy
         );

  return 0;
}
