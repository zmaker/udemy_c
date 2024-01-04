#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  //https://en.wikipedia.org/wiki/C_date_and_time_functions

  time_t t = time(NULL);
  struct tm now = *localtime(&t);

  printf("%d/%02d/%02d %02d:%02d:%02d\n",
         now.tm_year + 1900,
         now.tm_mon + 1,
         now.tm_mday,
         now.tm_hour,
         now.tm_min,
         now.tm_sec
         );

  char *str;
  str = ctime(&t);
  printf("%s\n", str);

  //diff
  struct tm t1 = *localtime(&t);
  t1.tm_hour = 0;
  t1.tm_min = 0;
  t1.tm_sec = 0;
  t1.tm_mday = 1;

  double sec = difftime(t, mktime(&t1));
  printf("sec: %.f s\n", sec);

  return 0;
}
