#include <stdio.h>
#include <stdbool.h>

int main ()
{
  bool b = true ;
  int* p ;
  if (b)
    *p = 12 ;
  else
    printf("%d",*p) ;
}
