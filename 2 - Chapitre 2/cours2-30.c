#include <stdio.h>


int main ()
{
  int tab2[2][3] = { { 0,1,2 }, {1,2,3 } } ;
  int* p = tab2 ;
  for (int i = 0; i < 6; i++)
    printf("%d ", *(p+i)) ;
}
