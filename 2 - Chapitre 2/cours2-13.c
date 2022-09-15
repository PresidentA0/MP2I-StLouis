#include <stdio.h>


int cpt = 0 ;

int fibonacci(int n, long unsigned p)
{
  int a = 0 ;
  cpt++ ;
  printf("Iteration numero: %d \t Distance a main: %lu.\n"
	 ,cpt, p - (long unsigned)&a) ;
    if (n==0 || n==1)
        return 1 ;
    else
      {
	int a = fibonacci(n-1,p) ;
	int b = fibonacci(n-2,p) ;
	a = a + b ;
	return a ;
      }
}


int main ()
{
  int a = 0 ;
  printf("%d\n", fibonacci(120000, (long unsigned)&a)) ;
  // 140 000: valeur charniere
}
