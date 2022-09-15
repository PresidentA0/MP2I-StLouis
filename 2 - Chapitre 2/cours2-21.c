#include <stdio.h>


void f (int nbRow, int nbCol, int tab[][])
{
  printf("%d\n", tab[nbRow-2][nbCol-1]) ;
}


int main ()
{
  int tab[2][3] = { { 0,1,2 }, {1,2,3 } } ;
  f(2,3,tab) ;
}
