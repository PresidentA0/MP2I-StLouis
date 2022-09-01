#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <stdlib.h>


// Bonne pratique:


int intSqrt (double x)
    // x est positif.
{
  assert(x >= 0) ;
  return ((int)(sqrt(x))) ;
}


int main ()
{
  double x ;
  printf("Entrez un flottant positif: ");
  scanf("%lf",&x) ;
  printf("La racine carree entiere de %lf est %d\n",x,intSqrt(x)) ;
}
