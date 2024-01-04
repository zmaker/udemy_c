#include <stdio.h>
#include <stdlib.h>

#define VERO 1
#define FALSO 0

#define UNO 1
#define DUE UNO+UNO

#define ERR_MSG "errore di sistema"
#define MSG1 "nel mezzo del \
cammi di nostra vita"

#define MAX_SZ 10

#define ABS(a) (a)<0 ? -(a) : (a)

#define ITA 0
#define ENG 1
#define ESP 2

#define LANG ENG
#define DEBUG

int main() {

  printf("%d %d\n", VERO, FALSO);
  printf("%d %d\n", UNO, DUE);
  printf("%s \n", ERR_MSG);
  printf("%s \n", MSG1);

  int num[MAX_SZ];

  printf("ABS: %d \n", ABS(10));
  printf("ABS: %d \n", ABS(-10));
  printf("ABS: %d \n", ABS(10-2));

  #if LANG == ITA
  printf("Ciao!\n");
  #elif LANG == ENG
  printf("Hello!\n");
  #elif LANG == ESP
  printf("Ola!\n");
  #else
  printf("???\n");
  #endif // LANG

  //#undef LANG

  #if defined DEBUG
  printf("DEBUG ATTIVO\n");
  #endif // defined

  printf("%s\n", __FILE__);
  printf("%s %s\n", __DATE__, __TIME__);

  return 0;
}
