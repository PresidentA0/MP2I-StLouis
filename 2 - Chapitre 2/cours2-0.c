#include <stdio.h>

int main ()
{
  int var = 12 ;
  int*  p = &var ;
  printf("%d   %p   %lu", var, p, (long)(p)) ;
}
