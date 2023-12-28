#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str[10];
  str[0] = 'h';
  str[1] = 'e';
  str[2] = '\0';

  char nome[] = "Mario Rossi";
  printf("nome: %s\n", nome);

  printf("%s (%d) L:(%d)\n", nome, sizeof(nome), strlen(nome));
  printf("%s (%d) L:(%d)\n", str, sizeof(str), strlen(str));

  char cognome[30] = "Garibaldi";
  printf("%s (%d) L:(%d)\n", cognome, sizeof(cognome), strlen(cognome));

  char s1[20];
  gets(s1);
  char s2[20];
  gets(s2);
  printf("S ricevute: %s %s\n", s1, s2);

  int ans = strcmp(s1, s2);
  printf("compare: %d\n", ans);
  if (!strcmp(s1, s2)) {
      printf("UGUALI\n");
  }

  char citta[30];
  strcpy(citta, "Milano marittima");
  printf("c: %s\n", citta);

  strcat(s1, s2);
  printf("s1 concat: %s\n", s1);

  if (strchr("salve", 'e')) printf("e e' in salve\n");
  if (strstr("nel mezzo del cammin", "del")) printf("trovato del\n");

  return 0;
}
