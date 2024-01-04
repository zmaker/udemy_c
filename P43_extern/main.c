#include <stdio.h>
#include <stdlib.h>
#include "my_fun.h"

int n;

int main()
{
  extern int globn;
  globn = 123;

  extern int n;

  saluta();
  return 0;
}
