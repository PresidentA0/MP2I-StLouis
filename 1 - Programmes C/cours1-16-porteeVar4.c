#include <stdio.h>




void f (int x)
{
  int y = x+1 ;
}

int main ()
{
  int a = 3 ;
  int y = 1 ;
  f(a) ;
  printf("%d\n",y) ;
}
