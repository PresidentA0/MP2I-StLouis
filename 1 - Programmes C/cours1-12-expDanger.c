#include <stdio.h>

double expo (double x, int n)
{
  double result = 1 ;
  for (int i = 0; i < n; i++)
  {
    result = result * x ;
    n++ ;
  }
  return result ;
}

int main ()
{
  int n ;
  double x ;
  printf("Entrez un flottant et un entier, separes par un espace: ") ;
  scanf("%lf %d",&x, &n) ;
  printf("expo(%lf,%d) = %lf\n", x, n, expo(x,n)) ;
}
