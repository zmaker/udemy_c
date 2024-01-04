#include <stdio.h>
#include <stdlib.h>
#include "my_fun.h"

void saluta(){
  extern int globn;
  printf("Ciao!\n");
  printf("%d \n", globn);
}
