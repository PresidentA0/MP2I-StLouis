#include <stdio.h>


void andBeyond (int n)
{
  printf("%d %p %lu\n", n,&n,(long)&n) ;
  andBeyond (n+1) ;
}


int main ()
{
  andBeyond (0) ;  
}
