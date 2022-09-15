#include <stdio.h>


void andBeyond ()
{
  int a ;
  printf("%p %lu\n", &a, (long)&a) ;
  andBeyond () ;
}


int main ()
{
  andBeyond () ;  
}
